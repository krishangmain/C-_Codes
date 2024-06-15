#include<bits/stdc++.h>
using namespace std;
vector<int>dp(100005,10005);
int solve(int n, int x,int ** input){
    if(n==1){
        return input[n-1][x];
    }
    // if (dp[n][]!= -1)
    // {
        
    // }
    int option1=0,option2=0;
    if(x==0){
        option1=solve(n-1,1,input);
        option2=solve(n-1,2,input);
    }
    else if(x==1){
        option1=solve(n-1,0,input);
        option2=solve(n-1,2,input);
    }
    else {
        option1=solve(n-1,1,input);
        option2=solve(n-1,0,input);
    }
    return max(option1,option2)  + input[n-1][x];
    
}
int main()
{
    int n ;
    cin>>n;
    int input[n][3];  
    for (int  i  = 0; i  < n; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin>>input[i][j];
        }
        
    }
    int answer=max({solve(n,0,input),solve(n,1,input),solve(n,2,input)});
    
    
    
    return 0;
}
