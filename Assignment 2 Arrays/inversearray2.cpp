#include<iostream>
using namespace std;
void reversearray(int a[],int n){
    for(int i = 0; i < n/2; i++)
    {
        a[i]=a[i]+a[n-i-1] -( a[n-1-i]=a[i]);
    }
    
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];

    }
    reversearray(a,n);
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
    
    
    return 0;
}
