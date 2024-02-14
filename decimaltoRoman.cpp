#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	cout<<"Enter The Number You Want In Roman"<<endl;
	cin>>a;
	int num[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
    string sym[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    int i=12;
    while(a>0)
    {
    	int number=a/num[i];
    	a=a%num[i];
    	while(number>0)
    	{
    		cout<<sym[i];
    		number--;
    	}
    	i--;
    } 

}