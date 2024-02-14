#include<iostream>
#include<fstream>
#include<cmath>
#include<cstring>
using namespace std;
int factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	return n*factorial(n-1);
}
double ncr(int a,int b)
{
	return factorial(a)/(factorial(b)*factorial(a-b));
}
int main()
{
 int v;
 v=ncr(5,3);
 cout<<v<<endl;
}

