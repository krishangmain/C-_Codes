#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the numbers :";
    cin>>a>>b>>c;
    if(a>=b){
        if (a>=c){
            cout<<"the largest number is: "<<a;
        }
        else{
            cout<<"the largest number is: "<<c;
        }
    }
    else if(b>=c){
        cout<<"the largest number is: "<<b;
    }
    else{
        cout<<"the largest number is: "<<c;
    }
    return 0;
}

// if we have a body of if in the single line we can 
// go around without mentioning curly braces