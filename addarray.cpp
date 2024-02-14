#include<iostream>
using namespace std;
int main()
{
   int *a=new int[5];
   for(int j=0;j<5;j++)
   {
   	  cin>>a[j];
   }
   int *p=new int[10];
   int i;
   for(i=0;i<5;i++)
   {
   	p[i]=a[i];
   }
   delete []a;
   a=p;
   p = NULL;
   for(i=0;i<10;i++)
   {
   	cout<<a[i]<<endl;
   }
}

