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
    int x;
    cin>>x;
    bool flag=false;     //we created this so that in the loop we dont have to
     for(int i=0;i<n;i++){   // print no or yes multiple times what we can do
        if(arr[i]==x){     // is to create a value which will allow us to print it
            flag=true;     //just once to create a more seemless code for execution
        }
     }
    if (flag==true){
        cout<<"Yes";
    }
    else{
        cout<<"no";
    }
}


   