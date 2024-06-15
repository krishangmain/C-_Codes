#include <bits/stdc++.h>
using namespace std;
int dp[100000];
long long solve(int n, int input[]){
    // 1 -->n
    // 1-->n-1 + n-1 -->n
    // 1-->n-2 + n-2 -->n
    if(n==1)return 0;
    if(n==2)return abs(input[1]-input[0]);
    if(dp[n]!=-1)return dp[n];
    int op1=solve(n-1, input)+abs(input[n-2]-input[n-1]);
    int op2=solve(n-2, input)+abs(input[n-3]-input[n-1]);
    return dp[n]=min(op1, op2);
}
int main(){
    memset(dp, -1, sizeof(dp));
    int n;
    cin>>n;
    int input[n];
    for(int i=0;i<n;i++)cin>>input[i];
    cout<<solve(n, input);
    return 0;
}