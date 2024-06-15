#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    long long arr[n], p[n], s[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    p[0]=arr[0];
    s[n-1]=arr[n-1];

    for(int i=1;i<n;i++){
        p[i]=p[i-1]*arr[i];
    }
    for(int i=n-2;i>=0;i--){
        s[i]=s[i+1]*arr[i];
    }
    for(int i=0;i<n;i++){
        if(i==0)cout<<s[1]<<" ";
        else if(i==n-1)cout<<p[n-2]<<" ";
        else
        cout<<s[i+1]*p[i-1]<<" ";
    }
    return 0;
}