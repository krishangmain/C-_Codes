#include<bits/stdc++.h>
using namespace std;
int dp[105][100005];
int lcs(int w, int n , vector<int>&weights, vector<int>&values){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=w;j++){
            if(i==0||j==0)dp[i][j]=0;
            else if(j>=weights[i-1]){
                dp[i][j]=values[i-1]+dp[i-1][j-weights[i-1]];
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][w];
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