#include<iostream>
#include<algorithm>
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
    sort(a,a+n);
    for(int i = 0; i < n; i++)
    {
        for(int j = 1+i; j < n; j++)
        {
            for(int k = 1+j; k < n; k++)
            {
                if(a[i]+a[j]+a[k]==target){
                    cout<<a[i]<<", "<<a[j]<<" and "<<a[k]<<endl;
                }
            }
            
        }
        
    }
    
    // for(int i = 0; i < n; i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    
    return 0;
}
