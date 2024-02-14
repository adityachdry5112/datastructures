#include<iostream>
using namespace std;
int maximum(int A[],int n){
	int max;
	max=A[0];
	for(int i=1;i<n;i++){
		if(max<A[i]){
			max=A[i];
		}
	}
	return max;
}
int miss(int Q[],int W[],int n,int m)
{
	for(int j=0;j<n;j++){
		W[Q[j]]++;
	}
	for(int k=0;k<m;k++){
		if(W[k]==0){
			cout<<k<<endl;
		}
	}
}
int main()
{
    int X[]={0,1,2,3,4,7,9};
    int c=maximum(X,7);
    int wasd[c];
    for(int i=0;i<c;i++){
    	wasd[i]=0;
	}
	miss(X,wasd,7,c);
}

