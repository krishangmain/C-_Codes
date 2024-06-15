#include<bits/stdc++.h>
using namespace std;
int dp[105][100005];
int solve(int n,int weight[],int value[],int w){
    if(n==0)return 0;
    if(dp[n][w]!=-1)return dp[n][w];
    int op1=solve(n-1,weight,value,w);
    int op2=op1;
    if(weight[n-1]<=w){
        op2=value[n-1]+solve(n-1,weight,value,w-weight[n-1]);
    }
    return dp[n][w]= max(op1,op2);
}
int main(){
    memset(dp,-1,sizeof(dp));
    int n,w;
    cin>>n>>w;
    int weight[n],value[n];
    for(int i=0;i<n;i++){
        cin>>weight[i]>>value[i];
    }
    cout<<solve(n,weight,value,w);
    return 0;
}
// #knapsack

#include<bits/stdc++.h>
using namespace std;
int dp[105][100005];
int solve(int n,int weight[],int value[],int w){
    if(n==0)return 0;
    if(dp[n][w]!=-1)return dp[n][w];
    int op1=solve(n-1,weight,value,w);
    int op2=op1;
    if(weight[n-1]<=w){
        op2=value[n-1]+solve(n,weight,value,w-weight[n-1]);
    }
    return dp[n][w]= max(op1,op2);
}
int main(){
    memset(dp,-1,sizeof(dp));
    int n,w;
    cin>>n>>w;
    int weight[n],value[n];
    for(int i=0;i<n;i++){
        cin>>weight[i]>>value[i];
    }
    cout<<solve(n,weight,value,w);
    return 0;
}
// #unbounded knapsack