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
    int summer[n];
    // sum[0]=a[0];
    // sum[1]=a[0]+a[1];
    // sum[2]=a[0]+a[1]+a[2];
    for(int i = 0; i < n; i++)
    {   summer[i]=0;
        for(int j = 0; j <=i; j++)
        {
            
            summer[i]+=a[j];
        }
        
    }
    for(int i = 0; i < n; i++)
    {
        cout<<summer[i]<<" ";
    }
    
    
    return 0;
}
