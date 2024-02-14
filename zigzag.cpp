#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
string convert(string s, int numRows) {
        if(numRows==1){
            return s;
        }
        vector<string> str(numRows);
        for(int i=0;i<numRows;i++){
            if(i==0||i==numRows-1){
                for(int j=i;j < s.size();j+=2*(numRows-1)){
                    str[i]+=s[j];
                }
            }
            if(i>0 && i!=numRows-1){
                for(int k=i;k<s.size();k+=2*(numRows-1)){
                str[i]+=s[k];
                str[i]+=s[k+2*(numRows-i-1)];
                }
            }
        }
        string result;
        for (const string& rowStr : str) {
            result += rowStr; 
        }
        return result;
    }
    int main(){
        string s = "PAYPALISHIRING";
        string wasd=convert(s,3);
        cout<<wasd;
    }