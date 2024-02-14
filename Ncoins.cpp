#include<bits/stdc++.h>
using namespace std;
int ncoins(int coins[],int n,int target,vector<int> &dp){
    if(target==0){
        return 0;
    }
    if(target<0){
        return -1;
    }
    if(dp[target]!=-1){
        return dp[target];
    }
    int mincount=INT_MAX;
    for(int i=0;i<n;i++){
        int count=ncoins(coins,n,target-coins[i],dp);
        mincount=min(mincount,count+1);
    }
    if(mincount==INT_MAX){
        return -1;
    }
    dp[target]=mincount;
    return dp[target];
}
int main(){
    int coins[] = {1, 2, 3};
    int n = 3;
    int target = 7;
    vector<int> dp(target + 1, -1);

    cout << ncoins(coins, n, target, dp) << endl;
    return 0;
}