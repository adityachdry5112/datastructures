#include<iostream>
using namespace std;
int sorting(int arr[],int n ,int x)
{
	int i=n-1;
	while(arr[i]>x)
	{
		arr[i+1]=arr[i];
		i--;
	}
	arr[i+1]=x;
}
void display(int s[],int y)
{
	int h;
	for(h=0;h<y;h++){
		cout<<s[h]<<"  ";
	}
	cout<<endl;
	cout<<endl;
}
int main()
{
    int A[9]={1,2,4,5,6,7,8};
    display(A,7);
    sorting(A,7,3);
    cout<<"After running the function the array would be"<<endl;
    cout<<endl;
    display(A,8);
}

