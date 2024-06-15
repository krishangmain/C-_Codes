//Sequential Sort 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter the element";
        cin>>arr[i];}
                                
     for(int i=0;i<n-1;i++){                   
        for(int j=0; j<n-1;j++){           
            if(arr[j]>arr[j+1]){
            arr[j]= ((arr[j]+arr[j+1])-(arr[j+1]=arr[j]));} 
        }
     }  
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
//we check every element with all the elements in the array so for each iteration of i 
//we compare every element with what ever is left in the array 



