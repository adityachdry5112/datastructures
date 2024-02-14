#include<iostream>
using namespace std;
void displayarray(int arr[],int n)
{
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"  ";
	}
	cout<<endl;
}
void append(int arr[],int n,int z,int c){
	if(n<z){
		arr[n]=c;
	}
	n=n+1;
}
int main()
{
   int A[9]={1,2,3,4,5};
   int m=5;
   int a=9;
   displayarray(A,m);
   append(A,m,a,7);
   displayarray(A,6);
}

