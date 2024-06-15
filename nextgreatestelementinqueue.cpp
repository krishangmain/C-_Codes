#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={3,7,2,1,5,8};
    
    int n=sizeof(arr)/sizeof(int);
    vector<int>ans(n,-1);
    // cout<<n;
    stack<int>S;
    // fill(ans.begin(),ans.end(),-1);
    for(int i = n-1; i >= 0; i--)
    {
        while(S.size() && arr[S.top()]<=arr[i]) //the answer
        {
            S.pop();
        }
        if(S.size())
        {
            ans[i]=S.top();
        }
        S.push(i);
        
        
    }
    for(int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
    
    
    return 0;
}
