#include<iostream>
using namespace std;
int* reverse(int arr[],int n)
{
	 int* B = new int[n];
	int j;
	int i;
	for (i=0,j=n-1;i<n;i++,j--)
	{
		B[j]=arr[i];
	}
	return B;
}
int main()
{
  int A[]{9,8,7,6,5,4,3,2,1};
  int* X= reverse(A,9);
  for(int g=0;g<9;g++)
  {
  	cout<<X[g]<<endl;
  }
}

