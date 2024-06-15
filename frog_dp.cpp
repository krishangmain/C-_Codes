#include<bits/stdc++.h>
using namespace std;

    vector<int>dp(100005,-1);
int frog(int n,vector<int>&h){
     if(n==1)
     {
        return 0;
     }
     if(n==2){
        return abs(h[1]-h[0]);
     }
     if(dp[n]!=-1)
     {
        return dp[n];
     }
     
     int option1=frog(n-1,h) + abs(h[n-1]-h[n-2]);
     int option2=0;
     option2=frog(n-2,h) + abs(h[n-1]-h[n-3]);

     return dp[n]=min(option1,option2);
     
}
int main()
{
    int n;
    cin>>n;
    vector<int>h(n);
    for(int i = 0; i < n; i++)
    {
        cin>>h[i];
    }
    int answer;
    answer=frog(n,h);
    cout<<answer;
    return 0;
}
