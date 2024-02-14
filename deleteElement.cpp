#include<iostream>
using namespace std;
void displayarray(int arr[],int n)
{
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"  ";
	}
	cout<<endl;
}
int* deleteee(int arr[],int i,int n)
{
	int j;
	int*A=new int[n-1];
	for(j=0; j<i; j++)
{
    A[j] = arr[j];
}
for(j=i+1; j<n; j++) // Start from i+1 to exclude the element at index i
{
    A[j-1] = arr[j];
}
	return A;
}
int main()
{
   int S[8]={1,2,3,5,6,8,9,4};
   int size=8;
   cout<<"the array before deleting element"<<endl;
   displayarray(S,size);
   int*wasd=deleteee(S,5,size);
   size--;
   displayarray(wasd,size);
}

