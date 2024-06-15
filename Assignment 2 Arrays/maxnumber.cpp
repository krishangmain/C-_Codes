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
    int best;
    for(int i = 0; i < n; i++)
    {   int count=0;
        for(int j = 0; j < n; j++)
        {  
           if(a[i]==a[j])
           {
            count+=1;
           }
           
           
            
        }
        if(count>n/2)
           {
            best=a[i];
           }   
    }
    cout<<best;
    
    
    
    return 0;
}
