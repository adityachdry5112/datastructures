#include<iostream>
#include<fstream>
#include<cmath>
#include<cstring>
using namespace std;
double e(int a , int n)
{
	static double p=1 ,r=1;
	double f;
	if (n==0)
	{
		return 1;
	}
	f=e(a,n-1);
	p=p*a;
	r=r*n;
	return f+p/r;
}
int main()
{
	double a;
    a=e(1,100);
    cout<<a<<endl;
}

