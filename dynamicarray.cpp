#include<iostream>
#include<fstream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
int a[5]={2,4,6,8,10};
int *p=new int[5];
//p[0]=3;
//p[1]=5;
//p[2]=7;
//p[3]=9;
//p[4]=11;
cout<<"enter 5 number for array"<<endl;
for(int i=0;i<5;i++)
{
	cin>>p[i];
}
for(int i=0;i<5;i++)
{
	cout<<p[i]<<endl;
}
}

