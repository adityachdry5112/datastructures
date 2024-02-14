#include <iostream>
using namespace std;
int foursum(int A[],int n,int target)
{
    int j,k,l;
    int sum=0;
    for(int i=0;i<n-3;i++)
    {
        for(j=i+1;j<n-2;j++)
        {
            sum=A[j]+A[i];
            k=n-1;
            l=j+1;
            while(k>l)
            {
                if(sum+A[k]+A[l]==target){
                    cout<<A[k]<<" "<<A[l]<<" "<<A[i]<<" "<<A[j];
                    cout<<endl;
                    break;
                }
                else if(sum+A[k]+A[l]>target){
                    k--;
                }
                else {
                    l++;
                }
            }
        }
    }
    return 1;
}
int main(){
    int A[]={2,2,2,2,2};
    foursum(A,5,8);
}