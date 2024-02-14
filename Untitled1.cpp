#include<iostream>
using namespace std;
int top=-1;
void push(int arr[], int x)
{
	top+=1;
	arr[top]=x;
	return;
}
int pop(int arr[])
{
	int temp=arr[top];
	top-=1;
	return temp;
}

int main()
{
	int arr[100];
//	for(int i=1;i<=3;i++)
//	{
		push(arr,1);
		cout<<arr[top]<<endl;
		push(arr,2);
		cout<<arr[top]<<endl;
		int y=pop(arr);
		cout<<y<<endl;
		cout<<arr[top]<<endl;
		
		
//	}
	
}

