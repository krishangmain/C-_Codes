#include<iostream>
#include<math.h>
using namespace std;
int counter(int n){
    int count=0;
    if(n==0)
    {
        return 1;
    }
    else 
    {while(n>0)
    {
        n=n/10;
        count++;
    }
    return count;
    }
    
}
int main()
{
    int n;
    cin>>n;
    int digit[100];
    int numberofdigit;
    numberofdigit=counter(n);
    int temp=n;
    for (int i = numberofdigit - 1; i >= 0; i--) {
        digit[i] = temp % 10;
        temp = temp / 10;
    }
    for(int i = 0; i < numberofdigit; i++)
    {
        digit[i]=pow(digit[i],numberofdigit);
    }
    int summer=0;
    for(int i = 0; i < numberofdigit; i++)
    {
        summer+=digit[i];
    }
    if(n==summer)
    {
        cout<<"true";
    }
    else 
    {
        cout<<"false";
    }
    
    

    
    
    
    
    
    
    return 0;
}
