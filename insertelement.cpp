#include<iostream>
using namespace std;
void displayarray(int arr[],int n)
{
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"  ";
	}
	cout<<endl;
}
int* insert(int arr[],int a,int i,int n)
{
	//n is size of arr[]
	//i is the index where element is to be entered and a is the element
	int *A=new int[n+1];
	int j;
	for(j=n;j>=i;j--){
		A[j]=arr[j-1];
	}
	A[i-1]=a;
	for(j=i-2;j>=0;j--){
		A[j]=arr[j];
	}
	return A;
}
int main()
{
   int s[8]={1,2,5,6,8,1,4,88};
   int size=8;
   cout<<"the array before insertion"<<endl;
   displayarray(s,8);
   size++;
   int*newarr=insert(s,69,5,8);
   cout<<"the array after insertion is"<<endl;
   displayarray(newarr,size);
   
}

