#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int prefix[n],suffix[n];

    prefix[0]=a[0];
    suffix[n-1]=a[n-1];
    for (int i = 1; i < n; i++)
    {
        prefix[i]=max(prefix[i-1],a[i-1]);
    }
    // for(int i = 0; i < n; i++)
    // {
    //     cout<<prefix[i]<<" ";
    // }
    // cout<<endl;
    
    
    
    for(int i = n-2; i >= 0; i--)
    {
        suffix[i]=max(suffix[i+1],a[i+1]);
    }
    // for(int i = 0; i < n; i++)
    // {
    //     cout<<suffix[i]<<" ";
    // }
    int water=0;
    for(int i = 1; i < n-1; i++)
    {   int ans=0;
        ans= max((min(prefix[i],suffix[i])-a[i]),0);
        water+=ans;
    }
    cout<<water;
    
    
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<prefix[i]<<" ";
    // }
    
    
    
    return 0;
}
