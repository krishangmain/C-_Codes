#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int result=0;
    int mul=1;
    while(n>0)
    {int digit=n%10;
     if(digit==0)
     {
        result+=5*mul;
     }
     else 
     {
        result+=digit*mul;
     }
     n/=10;
     mul*=10;
     
    
        
    }
    
    cout<<result;
    
    return 0;
}
