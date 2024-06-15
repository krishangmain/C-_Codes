#include<iostream>
using namespace std;
void resversearray(int a[],int n){
    for (int i = 0; i < n/2; i++)
    {
        a[i]=a[n-1-i]+a[i] -(a[n-1-i]=a[i]);
    }
    
}
int digitcalculator(int n){
    int number=0;
    while(n>0){
        n/=10;
        number++;
    }
    return number;
}
int main()
{
    int n;
    cin>>n;
    int numberofdigit=digitcalculator(n);
    // cout<<numberofdigit;
    int digit[numberofdigit];
    // digit=numbertoarray(n,numberofdigit);

    int temp=n;
    for(int i = numberofdigit-1; i >= 0; i--)
    {
        digit[i]=temp%10;
        temp/=10;
    }
    resversearray(digit,numberofdigit);
    // for(int i = 0; i < numberofdigit; i++)
    // {
    //     cout<<digit[i]<<" ";
    // }
    //     cout<<endl;
    int result[numberofdigit];
    for(int i = 0; i < numberofdigit; i++)
    {
        result[digit[i]-1]=i+1;
    }
    resversearray(result,numberofdigit);
    for (int i = 0; i < numberofdigit; i++)
    {
        cout<<result[i];
}
    

    
    
    
    return 0;
}
