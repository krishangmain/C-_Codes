#include<bits/stdc++.h>
using namespace std;
void dfs(vector<vector<char>>&grid, int i , int j , int n, int m){
    if(i<0||j<0||i>=n||j>=m) return ;
    if(grid[i][j]=='0')
    {
        return;
    }
    grid[i][j]='0';
    dfs(grid,i+1,j,n,m)
    dfs(grid,i,j+1,n,m)
    dfs(grid,i-1,j,n,m)
    dfs(grid,i,j-1,n,m)
    
}




int solve(vector<vector<char>>&grid){
    int n=grid.size(), m= grid[0].size(), counter=0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(grid[i][j]=='1')
            {
                dfs(grid,i,j,n,m);
                counter++;
            }
            
        }
        
    }
    
}
int main()
{
    
    return 0;
}
