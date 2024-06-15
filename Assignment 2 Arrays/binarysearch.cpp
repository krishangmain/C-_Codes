#include<iostream>
using namespace std;
int binarysearch(int a[],int low,int high,int target){
    while(low<=high){
    int mid=(low+high)/2;
    if(a[mid]==target)
    {
        return mid;
    }
    else if(a[mid]<target)
    {
        low=mid+1;
    }
    else 
    {
        high=mid-1;
    }
    
}
return -1;
}
int main()
{int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int target,result;
    cin>>target;
    result=binarysearch(a,0,n,target);
    cout<<result;
    
    return 0;
}
