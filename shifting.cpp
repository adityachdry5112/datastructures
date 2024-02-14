#include<iostream>
using namespace std;
int shift(int a[],int n)
{
	int x;
	int i;
	x=a[0];
	for (i=1;i<n;i++)
	{
		a[i-1]=a[i];
	}
	a[n-1]=x;
	
}
void display(int s[],int y)
{
	int h;
	for(h=0;h<y;h++){
		cout<<s[h]<<endl;
	}
}
int main()
{
    int X[]={1,2,3,4,56,7,8,9};
    cout<<"before function run the array is"<<endl;
    display(X,8);
    shift(X,8);
    cout<<"after shiting the array is"<<endl;
    display(X,8);
}

