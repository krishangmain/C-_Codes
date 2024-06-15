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
        {count++;
            for(int j = i; j < n; j++)
            {
                a[j]=a[j+1];
                
            }
            i--; //Very Important to Remember as if we have two consecutive 0s this would lead 
            // to a problem where the first 0 is replaced by the next one and the next one would not 
            // have been checked
        }
        
    }
    for(int i = 0; i < count; i++)
    {
        a[n-i-1]=0;
    }
    

    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
    
    return 0;
}
