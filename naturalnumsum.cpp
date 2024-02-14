#include<iostream>
using namespace std;
int sum(int n)
{
    if(n!=0)
    {
        return n + sum(n-1);
    }
    else{
        return n;
    }
}
int main()
{
    int n;
    cout<<"enter the nummber upto which you want sum "<<endl;
    cin >> n;
    int s =sum(n);
    cout<<s<<endl;
};