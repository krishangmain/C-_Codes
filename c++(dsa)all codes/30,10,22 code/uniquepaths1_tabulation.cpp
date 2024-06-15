// #include<bits/stdc++.h>
// // vector<vector<int>>dp(10000,vector<int>(10000,-1));

// using namespace std;
// vector<vector<int>>dp(1000,vector<int>(1000,-1));
// int number_of_paths1(int n, int m){
//     if(dp[n][m]!=-1)
//     {
//         return dp[n][m];
//     }
    
//     if(n==1||m==1)
//     {
//         return 1;
//     }
//     return dp[n][m]=number_of_paths(n-1,m)+number_of_paths(n,m-1);
    
// }
// int main()
//     {int n,m;
//     cin>>n>>m;
//     int ans;
//     ans=number_of_paths(n,m);
//     cout<<ans;
    
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> dp(1000,vector<int>(1000,-1));
int numberpaths(int n,int m)
{
    for (int i = n-1; i >=0; i--)
    {
       for (int j = m-1; j >=0; j--)
       {
            if (i==n-1||j==m-1)
            {
                dp[i][j]=1;
            }
            else{
                dp[i][j]=dp[i+1][j] +dp[i][j+1];
            }
            
       }
       
    }
    
}
int main()
{    int n,m;
    cin>>n>>m;
    int ans;
    ans=numberpaths(n,m);
    cout<<ans;
    
    return 0;
}

