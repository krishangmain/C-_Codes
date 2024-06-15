#include<iostream>
using namespace std;
int main(){
    cout<<"Enter 3 numbers";
    int a,b,c;
    cin>>a>>b>>c;
    if(a>=b){
        if(a>=c){
            cout<<"the largest number is: "<<a;
        }
        else{
            cout<<"the largest number is: "<<c;
        }
    }
    else{
        if(b>=c){
            cout<<"the largest number is: "<<b;
        }
        else{
            cout<<"the largest number is: "<<c;
        }
    }
    return 0;
}