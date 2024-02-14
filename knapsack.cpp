#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class item{
    public:
    int weight;
    int profit;
    item(int profit,int weight){
        this->profit=profit;
        this->weight=weight;
    }
};
bool compare(item a,item b){
    double r1=a.weight/a.profit;
    double r2=b.weight/b.profit;
    return r1>r2;
}
double knapsack(item arr[],int n,int w)
{
    sort(arr,arr+n,compare);
    double finalvalue=0.0;
    for(int i=0;i<n;i++){
        if(arr[i].weight<=w){
            w-=arr[i].weight;
            finalvalue+=arr[i].profit;
        }
        else {
			finalvalue
				+= arr[i].profit
				* ((double)w / (double)arr[i].weight);
			break;
		}
    }
    return finalvalue;
}
int main(){
    item arr[]={{ 60, 10 }, { 110, 20 }, { 120, 50 }};
    int n=sizeof(arr)/sizeof(arr[0]);
    double wasd=knapsack(arr,n,40);
    cout<<wasd<<endl;
}