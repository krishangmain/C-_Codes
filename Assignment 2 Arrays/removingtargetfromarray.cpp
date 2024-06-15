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
            for(int j = i; j < n-1; j++)
            {
                a[j] = a[j+1];
            }
            count += 1;
            i--; // a[i]=a[i+1];
            // count+=1;
        }
        
    }
    n=n-count;
    // cout<<n;
    int result[n];
    for (int i = 0; i < n; i++)
    {
        result[i]=a[i];
    }
    

    for(int i = 0; i < n; i++)
    {
        cout<<result[i]<<" ";
    }
    
    
    
    return 0;
}
