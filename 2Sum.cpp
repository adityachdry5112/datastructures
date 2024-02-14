#include <iostream>
using namespace std;
int findsum(int a[6],int sum)
{
	cout<<"the possible pairs are "<<endl;
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<6;j++)
		{
			if(a[i]+a[j]==sum)
			{
				cout<<a[i]<<"  "<<a[j]<<endl;
			}
		}
	}
}
int maxwater(int a[n],int n)
int main()
{
	int A[6]={1,2,3,4,5,6};
	findsum(A,10);
}