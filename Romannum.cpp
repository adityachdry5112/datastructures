#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    string wasd[];
    string roman[5]={"I","V","X","L","C"};
    int decimal[5]= {1,5,10,50,100};
    string wasd[50];
    int A[50];
    int i;
    cout<<"Enter the total num of letter you are expecting in your roman number\n";
    cin>>i;
    cout<<"Enter the string of Roman numbers"<<endl;
    for(int j=0;j<i;j++)
    {
        cin>>wasd[j];
    }
    for(j=0;j<i;j++)
    {
        for(int k=0;k<5;k++)
        {
            if(wasd[j]==roman[k];)
            {
                int a=0;
                A[a]=decimal[k];
                a++
            }
        }
    }
    for(int n=0;n<i;n++)
    {
        int sum=0;
        if(A[n]>A[n+1])
        {
            sum+=A[n];
        }
        else if(A[n]<A[n+1])
        {
            sum-=A[n];
        }
    }
    cout<<"The number in decimal is "<<sum<<endl;
}