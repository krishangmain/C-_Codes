#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>dp(10005,vector<int>(10005,-1));
int longest_common_subsequence(char *a,int n,){
    // int n=strlen(a);
    // int m=strlen(b);
    if (dp[n][m]!=-1)
    {
        return dp[n][m];
    }
    
    if(n==0||m==0)
    {
        return 0;
    }
    if(a[n-1]==b[n-1])
    {
        return dp[n][m]=1 + longest_common_subsequence(a,b,n-1,m-1);
    }
    else
    {
        return dp[n][m]=max(longest_common_subsequence(a,b,n-1,m),longest_common_subsequence(a,b,n,m-1));
    }

    

    
    
    

}
int main()
{
    
    return 0;
}
