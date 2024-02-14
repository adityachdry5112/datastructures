#include<iostream>
using namespace std;
int missingelement(int A[],int n,int x)
{	int flag=0;
	for(int i=0;i<n;i++)
	{
		if(A[i]==x)
		{
			flag = 1;
		}
	}
	return flag;
}
int main()
{
  int X[]={1,2,3,4,5,6,7,20};
  int n=8;
  cout<<"the missing elements are	:"<<endl;
  for(int j=X[0];j<=X[n-1];j++)
  {
  	if(missingelement(X,n,j)==0){
  		cout<<j<<endl;
	  }
	  
  }
}

