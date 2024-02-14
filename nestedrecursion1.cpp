#include<iostream>
using namespace std;
int func(int n)
{
    if(n>100)
    {
        return n-10;
    }
    else{
        return func(func(n+11));
    }
    cout<<n<<endl;
}
int main()
{
    func(99);
}