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
    int best=a[0];
    for(int i = 0; i < n-1; i++)
    {
        if(a[i+1]>best)
        {
            best=a[i+1];
        }
        
    }
    cout<<best;
    
    
    return 0;
}
