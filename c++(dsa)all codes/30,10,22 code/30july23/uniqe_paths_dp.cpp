#include<bits/stdc++.h>
using namespace std;
int dp[105][105];
int solve(int n, int m, int x, int y){
    if(x==n-1||y==m-1)return 1;
    if(dp[x][y]!=-1)return dp[x][y];
    return dp[x][y]=solve(n, m, x+1, y)+solve(n, m, x, y+1);
}
int main(){
    memset(dp, -1,sizeof(dp));
    int n,m;
    cin>>n>>m;
    cout<<solve(n,m,0,0);
}
// There is a robot on an m x n grid. The robot is initially located at the top-left corner (i.e., grid[0][0]). The robot tries to move to the bottom-right corner (i.e., grid[m - 1][n - 1]). The robot can only move either down or right at any point in time.
// Given the two integers m and n, return the number of possible unique paths that the robot can take to reach the bottom-right corner.
// The test cases are generated so that the answer will be less than or equal to 2 * 109.
// Input: m = 3, n = 7
// Output: 28