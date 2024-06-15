#include<iostream>
using namespace std;
int main(){
    int max;
    int arr[]={5,7,3,5,9,3,5,9,1,1,1,3,3,5};
    max=arr[0];
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        
        if(arr[i]>max) max=arr[i];
        
    }
    //cout<<max<<endl;
    int f[max+1];
    for(int i=0;i<max+1;i++){
        f[i]=0;
    }
    for(int i=0;i<n;i++){
        f[arr[i]]++;
    }
    for(int i=0;i<max+1;i++){
        cout<<f[i]<<" ";
    }
    return 0;
    
}