#include<iostream>
#include<fstream>
#include<cmath>
#include<cstring>
using namespace std;
int fibonacci(int n)
{
	int t0=0 , t1=1 , s;
	if(n<=1)
	{
		return n;
	}
    int i;
	for(i=2;i <= n;i++)
    {
    	s=t0+t1;
    	t0=t1;
    	t1=s;
	}
	return s;
}
int main()
{
//   fibonacci(10);
int n;
cout<<"enter the number of terms you want to be printed ";
cin>>n;
for(int i=0;i<n;i++)
{
	cout<<fibonacci(i)<<endl;
}
}

