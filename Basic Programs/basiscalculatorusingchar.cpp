#include<iostream>
using namespace std;
int main(){
    int a,b;
    char c;
    cout<<"enter the numbers and the operation you would like to perform";
    cin>>a>>b>>c;
    if(c=='+'){
        cout<<a+b;
    }
    else if(c=='-'){
        cout<<a-b;
    }
    else if(c=='*'){
        cout<<a*b;
    }
    else if(c=='/'){
        if(b==0){
            cout<<"errorrrrr!!";} //this is the mistake everyone makes 
        else{                       // we should understand that division 
            cout<<(a*1.0)/b;}       // by 0 does not exsist
        
    }
    else if(c=='%'){
        cout<<a%b;
    }
    else{
        cout<<"not a valid operation";
    }











    return 0;
}