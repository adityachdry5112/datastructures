#include<iostream>
using namespace std;
void display(int s[],int y)
{
	int h;
	for(h=0;h<y;h++){
		cout<<s[h]<<"	";
	}
	cout<<endl;
}
int* merge(int A[],int B[],int n , int m)
{
	int* M=new int[m+n];
//	n is the size of a
//	m is the size of b
	int i=0;
	int j=0;
	int k=0;
	while (i<n && j<m)
	{
		if(A[i]<B[j]){
			M[k]=A[i];
			i++;
		}
		else{
			M[k]=B[j];
			j++;
		}
		k++;
	}
	while(i<n){
		M[k]=A[i];
		i++;
		k++;
	}
	while(j<m){
		M[k]=B[j];
		j++;
		k++;
	}
	return M;
}
int main()
{
    int S[]={1,2,3,4,5};
    int X[]={6,7,8,9,10};
    int* c=new int[10];
    c=merge(S,X,5,5);
    display(c,10);
}

