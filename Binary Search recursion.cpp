#include<iostream>
using namespace std;
bool bin(int arr[],int low,int high,int target){
    if(low>high)
    {
        return false;
    }
    
    int mid=(low)+(high-low)/2;  //better way to write as in this case the value of mid will not be larger than int can handle 
                                //  otherwise it will leave the int range of int and then will not work 
    if(arr[mid]==target)
    {
        return true;
    }
    else if(arr[mid]>target)
    {
        return bin(arr,mid+1,high,target);
    }
    else
    {
        return bin(arr,low,mid-1,target);
    }
    return false;
    
}
int main()
{   int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    bool hello=bin(a,0,n-1,5);
    cout<<hello;
    return 0;
}
