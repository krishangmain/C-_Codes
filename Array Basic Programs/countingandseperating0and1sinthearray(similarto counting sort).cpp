// we will have and array given to us in which we would have only 0 and 1s 
// our purpose is to shift the ones to the last side and the 0s to the front side
// without using sorting

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }                           //whatever is in the comments in the code is 
    cout<<endl;                // not required to run the code they are just 
    int count0=0;              //extra variables and our goal is to create a 
    // int count1=0;           //optimum soltion which requires minimum variables and loops to be used
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count0+=1;
        }
        // else if(i==1){
        //     count1+=1;
        // }
    }
    for(int i=0;i<n;i++){
        if(i<count0){arr[i]=0;}
        else{arr[i]=1;}
    }
    // for(int i=count0;i<n;i++){
    //     arr[i]=1;
    // }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}