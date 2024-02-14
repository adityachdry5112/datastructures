#include<bits/stdc++.h>
using namespace std;
int findminv(int *weight,bool *visited,int n)
{
    int minvertix=-1;
    for(int i=0;i<n;i++)
    {
      if(!visited[i] && (minvertix==-1 || weight[minvertix]>weight[i]))
      {
        minvertix=i;
      }
    }
    return minvertix;
}
void prim(int **matrix,int n,int e)
{
   int *parent=new int[n];
   int *weight=new int[n];
   bool *visited=new bool[n];
   for(int i=1;i<n;i++)
   {
      weight[i]=INT_MIN;
      visited[i]=false;
   }
   visited[0]=false;
   weight[0]=0;
   parent[0]=-1;
   for(int i=0;i<n;i++)
   {
     int minvertex=findminv(weight,visited,n);
     visited[minvertex]=true;
     for(int i=0;i<n;i++)
     {
         if(matrix[minvertex][i]!=0 && !visited[i]) 
         {
             if(matrix[minvertex][i]<weight[i])
             {
                weight[i]=matrix[minvertex][i];
                parent[i]=minvertex;
             }
         }
     }
   }
   for(int i=0;i<n;i++)
   {
    if(parent[i]>i)
    {
        cout<<i<<" "<<parent[i]<<" "<<weight[i]<<endl;
    }
    else
    {
         cout<<i<<" "<<parent[i]<<" "<<weight[i]<<endl;
    }
   }
}
int main()
{
    int n,e;
    cout<<"Enter Number of vertices and edges: "<<endl;
    cin>>n>>e;
    int *matrix=new int[n];
    for(int  i=0;i<n;i++)
    {
        matrix[i]=new int[n];
        for(int j=0;j<n;j++)
        {
            matrix[i][j]=0;
        }
    }
    for(int i=0;i<e;i++)
    {
        int f,s,w;
        cout<<"Enter source and dest and weight: "<<endl;
        cin>>f>>s>>w;
        matrix[f][s]=w;
        // matrix[s][f]=w;
    }
    prim(matrix,n,e);
}