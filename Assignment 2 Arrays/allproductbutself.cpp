#include<iostream>
using namespace std;
void printarray(int a[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}
void inputarray(int a[],int n){
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    inputarray(a, n);
    int product[n];
    for(int i = 0; i < n ; i++){
        product[i]=1;
        for(int j = 0; j < n; j++)
        {   if(j==i)
                {
                    continue;
                }
            
            else{
                    product[i]*=a[j];
                }
            
        }
        
    }
    printarray(product,n);
    
    
    return 0;
}

