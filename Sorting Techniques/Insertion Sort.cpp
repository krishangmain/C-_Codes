#include <iostream>
using namespace std;
int main() {
int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++)
    cin>>arr[i];
for(int i=0; i<n-1; i++){
    int indextoworkfor=i+1 , copy=arr[i+1], j=i ;
    while(j>=0 && arr[j]>copy){
        arr[j+1]=arr[j];
        j--;
    }
     arr[j+1]=copy;
}
for(int i=0; i<n; i++){
    cout<<arr[i];
}
}