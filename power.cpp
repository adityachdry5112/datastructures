#include<iostream>
#include<fstream>
#include<cmath>
#include<cstring>
using namespace std;
int power(int a , int n)
{
	if(n>=1)
	{
		return a*power(a,n-1);
	}
	else{
		return 1;
	}
}
int main()
{
	int c;
	int v;
	int w;
	cout<<"enter the number and its coefficient"<<endl;
	cin>>v;
	cin>>w;
  c=power(v,w);
  cout<<c<<endl;
}

