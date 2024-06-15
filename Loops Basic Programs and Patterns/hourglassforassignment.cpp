#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||j==0){
                cout<<"*"<<" ";
            }
            else if(i==j&&i!=0){
                cout<<"a"<<" ";
            }
            else{
                cout<<"_"<<" ";
            }
        }
        for(int j=0;j<n;j++){
            if(i==0||j==n-1){
                cout<<"*"<<" ";
            }
            else if(i+j==n-1&&i!=0){
                cout<<"A"<<" ";
            }
            else{
                cout<<"_"<<" ";
            }
        }
        
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==n-1||j==0){
                cout<<"*"<<" ";
            }
            else if(i+j==n-1&&j!=0){
                cout<<"A"<<" ";
            }
            else{
                cout<<"_"<<" ";
            }
        }
        for(int j=0;j<n;j++){
            if(i==n-1||j==n-1){
                cout<<"*"<<" ";
            }
            else if(i==j&&i!=n-1){
                cout<<"a"<<" ";
            }
            else{
                cout<<"_"<<" ";
            }
        }
        
        cout<<endl;
    }
    
}