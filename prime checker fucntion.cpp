#include<iostream>
using namespace std;
bool prime(int a){
    for(int i=2; i<(a/2);i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}
void printprime(int n){
    for(int i=2;i<n;i++){
        if(prime(i)==true){
            cout<<i<<endl;
        }
    }
}
int main(){
    // if(prime(9)==true){
    //     cout<<"yes a prime";

    // }
    // else{
    //     cout<<"not a prime";
    // }
    printprime(21);
}