#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter the element";
        cin>>arr[i];
    }
    int sum1=0;
    for(int i=0;i<n;i++){
        sum1+=arr[i];
    }
    cout<<sum1;
}