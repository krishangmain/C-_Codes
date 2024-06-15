// given two arrays identify that which elements are the same in the two arrays

#include<iostream>
using namespace std;
int main(){
    int arr0[5]={5,3,7,4,6};
    int arr1[6]={2,3,8,4,5,1};
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            if(arr0[i]==arr1[j]){
                cout<<arr0[i]<<" is the same element in the two arrays at the two positons "<<i+1 <<" and "<< j+1 <<endl;
            }
        }
    }
}