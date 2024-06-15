#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x, j;
    for(int i=1;i<n;i++){
        x=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>x){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=x;
        cout<<i<<"th pass:";
        for(int j=0;j<n;j++){
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}