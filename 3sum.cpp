#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    int A[]={-4,-1,-1,0,1,2};
    for(int i=0;i<6;i++)
    {int sum=A[i];
    int j=0;
    int k=5;
        while(j<=k)
        {
            if(A[j]+A[k]==-sum){
                cout<<A[j]<<A[k]<<sum<<endl;
                continue;
            }
            else if(A[j]+A[k]>sum)
            {
                k--;
            }
            else{
                j++;
            }
        }
    }
}