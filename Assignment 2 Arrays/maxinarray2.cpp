#include<iostream>
using namespace std;
int maxfind(int a[],int n){
    int best=a[0];
    for(int i = 0; i < n; i++)
    {
        if(a[i]>best)
        {
            best=a[i];
        }
        
    }
    return best;
    
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
    int result;
    result=maxfind(a,n);
    cout<<result;
    
    return 0;
}
