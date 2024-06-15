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
    int count=0;
    for(int i = 0; i < n; i++)
    {
        if(a[i]==0)
        {
            count+=1;
            // cout<<count<<" ";
        }
        
    }
    for(int i = 0; i < n; i++)
    {
        if(i<count)
        {
            a[i]=0;
        }
        else 
        {
            a[i]=1;
        }
        
    }
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
    
    return 0;
}
