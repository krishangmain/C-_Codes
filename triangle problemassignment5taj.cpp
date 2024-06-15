#include<iostream>
using namespace std;
long long nc2(int a){
    
    return (a*(a-1))/2;
}
long long mod=1e9 + 7;

int main()
{
    // cout<<nc3(4);
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int answer=0;
    for(int i = 0; i < n-1; i++)
    {   
        answer=(answer)%mod+(((a[i]%mod)*(nc2(a[i+1])%mod))%mod + ((nc2(a[i])%mod)*(a[i+1]%mod))%mod)%mod;
        
    }
    // explanation in notes
    // (a+b)%n should be written as (a%n +b%n)%n
    // this ensures that the value never leaves the range of int
    // (a+b)%n might leave the range of int but the other never will 
    cout<<answer;
    
    return 0;
}
