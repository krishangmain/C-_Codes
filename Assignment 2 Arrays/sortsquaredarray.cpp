#include<iostream>
#include<math.h>
using namespace std;
int main()
{   int n;
    cin>>n;
    double a[n];
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for(int i = 0; i < n; i++)
    {
        a[i]=pow(a[i],2);
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(a[j]>a[j+1]){
                a[j]=a[j]+a[j+1] - (a[j+1]=a[j]);
            }
        }
        
    }
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
    

    
    
    return 0;
}
