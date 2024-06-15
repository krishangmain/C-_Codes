// we have an array and a target and we have to find if in the array does there exsist two elements such that their sum equals the target 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){           //[127589]
        cout<<"enter the element";
        cin>>arr[i];
    }
    bool he=false;
    int target;
    cout<<"enter the target";   //12
    cin>>target;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j]==target){
                he=true;
            }
        }
    }
    if(he){               // can also use !flag meaning not flag so do whats written 
                            //in the only when the given boolean variable is false 
        cout<<"YES";
    }

    
}