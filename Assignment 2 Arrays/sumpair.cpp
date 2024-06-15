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
                if(a[i]+a[j]==target){
                    cout<<a[i]<<" and "<<a[j]<<endl;
                }
            
        }
        
    }
    
    // for(int i = 0; i < n; i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    
    return 0;
}
