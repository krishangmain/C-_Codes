#include<bits/stdc++.h>
using namespace std;
bool ispossible(int mid,int n , vector<int>&V){  //here we use the and so that we can save on the space created by the vector as now it is only sending the address now rather than the data and occupying space
    int count;
    for(int i = 0; i < n; i++)
    {
        if(V[i]>=mid)
        {
            count++;
        }
        else 
        {
            count=0;
        }
        if(count>=mid )
        {
            return true;
        }
        
        
    }
    return false;
    
}
int main()
{   int n;
    cin>>n;
    vector<int>V(n);
    for(int i = 0; i < n; i++)
    {
        cin>>V[i];
    }
    int s=1,e=n,ans=0;
    while(s<=e)
    {
        int mid =s + (e-s)/2;
        if(ispossible(mid,n,V))
        {   ans=max(ans,mid);
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
