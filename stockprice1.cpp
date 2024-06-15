#include<iostream>
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
    int profit[n];
    profit[n-1]=0;
    for(int i = n-2; i >=0 ; i--)
    {
        profit[i]=max(profit[i+1],a[i+1]);  //can be done with prefix as well 
    }
    // for(int i = 0; i < n; i++)
    // {
    //     cout<<profit[i]<<" ";
    // }
    int maxprofit=0;
    for(int i = 0; i < n; i++)
    {int ans=0;
        ans=profit[i]-a[i];
        maxprofit=max(maxprofit,ans);
    }
    cout<<maxprofit;
    
    
    return 0;
}
