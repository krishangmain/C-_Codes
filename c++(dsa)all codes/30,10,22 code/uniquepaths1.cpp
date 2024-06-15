#include<bits/stdc++.h>
// vector<vector<int>>dp(10000,vector<int>(10000,-1));

using namespace std;
vector<vector<int>>dp(1000,vector<int>(1000,-1));
int number_of_paths(int n, int m){
    if(dp[n][m]!=-1)
    {
        return dp[n][m];
    }
    
    if(n==1||m==1)
    {
        return 1;
    }
    return dp[n][m]=number_of_paths(n-1,m)+number_of_paths(n,m-1);
    
}
int main()
    {int n,m;
    cin>>n>>m;
    int ans;
    ans=number_of_paths(n,m);
    cout<<ans;
    
    return 0;
}
