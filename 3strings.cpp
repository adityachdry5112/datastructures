#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string reverse(string s){
    int n =s.length();
    int j=0;
    int* str=new int*[n];
    for(int i=0;i<n;i++){
        if(s[i]==" "){
            str[j]=i;
            j++;
        }
    }
}