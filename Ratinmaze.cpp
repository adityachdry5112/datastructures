#include<iostream>
using namespace std;
void print(int n , int** solution){
    cout<<"The Solution is -:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<solution[i][j]<<" ";
        }
        cout<<endl;
    }
}
void mazerunner(int n,int** matrix,int** solution,int row=0,int column=0){
    if(row== n-1&&column ==n-1){
        solution[row][column]=1;
        print(n,solution);
        solution[row][column]=0;
        return;
    }
    if(row<0||column<0||row>=n||column>=n||matrix[row][column]==0||solution[row][column]==1)
    {
        return;
    }
    solution[row][column]=1;
    mazerunner(n,matrix,solution,row-1,column);  //up
    mazerunner(n,matrix,solution,row+1,column);  //down
    mazerunner(n,matrix,solution,row,column-1);  //left
    mazerunner(n,matrix,solution,row,column+1);  //right
    solution[row][column]=0;
}
int main()
{
    int n;
    cout<<"Enter the order of matrix"<<endl;
    cin>>n;
    int** matrix=new int*[n];
    int** solution=new int*[n];
    cout<<"Enter the traps "<<endl;
    for(int i=0;i<n;i++)
    {
        solution[i]=new int[n];
        matrix[i]=new int[n];
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
            solution[i][j]=0;
        }
    }
    mazerunner(n,matrix,solution);
}
// 1 0 0 0
// 1 1 0 1 
// 1 1 0 0
// 0 1 1 1
        