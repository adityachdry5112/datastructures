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
int* intersection(int S[],int T[],int w,int d)
{
	int i=0;
	int j=0;
	int k=0;
	int* I=new int[w+d];
	while(i<w&&j<d)
	{
		if(S[i]==T[j]){
			I[k]=S[i];
			i++;
			j++;
			k++;
		}
		else if(S[i]<T[j])
		{
			i++;
		}
		else{
			j++;
		}
	}
	int* F=new int[k];
	for(int x=0;x<k;x++)
	{
		F[x]=I[x];
	}
	delete[] I;
	return F;
}
int* younion(int A[],int B[],int n , int m){
	int i=0;
	int j=0;
	int k=0;
	int* U=new int[m+n];
	while(i<n&&j<m){
		if(A[i]<B[j]){
			U[k]=A[i];
			i++;
			k++;
		}
		else if(B[j]>A[i]){
			U[k]=B[j];
			j++;
			k++;
		}
		else {
			U[k]=A[i++];
			k++;
			j++;
		}
	}
	while(i<n)
	{
		U[k]=A[i];
		i++;
		k++;
	}
	while(j<m){
		U[k]=B[j];
		j++;
		k++;
	}
	return U;
}
int main()
{
   int S[]={1,2,3,4,5,6,8,9};
   int D[]={4,5,6,11,12,16,17};
   int*X=younion(S,D,8,7);
   cout<<"the union of the sets is"<<endl;
   display(X,15);
   int*Y=intersection(S,D,8,7);
   cout<<"the intersection of the set is"<<endl;
   display(Y,min(7,8));
   delete[] X;
   delete[] Y;
}

