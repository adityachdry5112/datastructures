#include<iostream>
using namespace std;
void display(int s[],int y)
{
	int h;
	for(h=0;h<y;h++){
		cout<<s[h]<<"	";
	}
	cout<<endl;
}
int checksorting(int A[],int n){
	int i;
	int j=1;
	for(i=0;i<n-1;i++)
	{
		if (A[i]>A[i+1])
		{
		   j=0;
		}
	}
	if(j==1)
	{
		cout<<"The list is sorted"<<endl;
	}
	else
	{
		cout<<"The list is not sorted"<<endl;
	}
}
int bubblesort(int B[],int x)
{
	int j;
	int c;
	int k;
	for (j=0;j<x-1;j++)
	{
		for (k=0;k<x-j-1;k++)
		{
			if(B[k]>B[k+1])
		{
			c=B[k+1];
			B[k+1]=B[k];
			B[k]=c;
		}
		}
	}
}
int main()
{
   int X[]={1,2,3,4,5,6,7,8,9,10};
   checksorting(X,10);
   int Y[]={1,2,3,4,-7,-4,-5,8,-6};
   display(Y,9);
   bubblesort(Y,9);
   cout<<"after the function runn"<<endl;
   display(Y,9);
}

