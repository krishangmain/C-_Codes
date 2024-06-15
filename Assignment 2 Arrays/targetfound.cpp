#include<iostream>
using namespace std;
int search(int arr[],int n,int target){
    for(int i = 0; i < n; i++)
    {
        if(arr[i]==target)
        {
            return i;
        }

        
    }
    return -1;
    
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
    int target;
    cin>>target;
    int final =search(a,n,target);
    cout<<final;
    
    

    
    return 0;
}
