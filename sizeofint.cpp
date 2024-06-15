#include<iostream>
using namespace std;
int main(){
    int a=1;
    cout<<&a<<endl;
    //0x61ff0c this the in the hexadecimal form due to it being a tad bit smaller when representing 
    //0x is used to identify that the given number is in hexadecimal form 
    cout<<&a+1<<endl;
    cout<<&a+2<<endl;
    // 0x61ff0c
    // 0x61ff10  Answers
    // 0x61ff14
    double b=1;
    cout<<&b<<endl;
    cout<<&b+1<<endl;
    cout<<&b+2<<endl;
    // 0x61ff00
    // 0x61ff08
    // 0x61ff10

}







