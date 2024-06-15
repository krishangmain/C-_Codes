#include<bits/stdc++.h>
using namespace std;
int minimum_distance(vector<int>V,int n){
    int ans=0;;
    for(int i = 0; i < n; i++)
    {
        ans=min(ans,V[i+1]-V[i]);
        
    }
    
    return ans;
}
bool possible(int mid, vector<int>V,int stalls,int cows ){
    int last=V[0];
    int cc=1;
    for(int i = 0; i < stalls; i++)
    {
        if(V[i] - last>=mid)
        {
            cc++;
            last=V[i];
            if(cc==cows)
            {
                return true;
            }
            
        }
        
    }
    return false;
    
}
int main()
{   
    int n;
    cin>>n;
    vector<int>V;
    for(int i = 0; i < n; i++)
    {   int a;
        cin>>a;
        V.push_back(a);
    }
    int k;
    cin>>k;
    // for(int i = 0; i < n; i++)
    // {
    //     cout<<V[i];
    // }
    
    int s=minimum_distance(V,n);
    int e=V[n-1]-V[0];
    int ans=s;
    while(s<=e)
    {
        int mid=s + (e-s)/2;
        if(possible(mid,V,n,k))
        {
            ans=mid;
            s=mid+1;
        }
        else 
        {
            e=mid-1;
        }
        
    }
    cout<<ans;
    
    return 0;
}
