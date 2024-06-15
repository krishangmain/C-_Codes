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
    int prefix[n], suffix[n],result[n];
    prefix[0]=1;
    suffix[n-1]=1;
    for(int i = 1; i < n; i++)
    {
        prefix[i]=a[i-1]*prefix[i-1];  //note that we take i-1 as the prefix would contian whatever is before that number 
    }
    for(int i = n-2; i >=0; i--)
    {
        suffix[i]=a[i+1]*suffix[i+1];  //and in suffix we can use i+1 so that each number has whatever is in front of that number
    }
    
    for(int i = 0; i < n; i++)
    {
        result[i]=suffix[i]*prefix[i];
    }
    for(int i = 0; i < n; i++)
    {
        cout<<result[i]<<" ";
    }
    
    
    
    

    return 0;
}
