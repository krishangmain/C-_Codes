#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int target;
    cin>>target;
    int count=0;
    for(int i = 0; i < n; i++)
    {
        if(a[i]==target)
        {
            a[i]=a[i+1];
            count+=1;
        }
        
    }
    n=n-count;
    // cout<<n;

    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
    
    return 0;
}
