#include<iostream>
using namespace std;
bool prime(int a){
    for(int i=2; i<(a/2);i++){
        if(a%i==0){
            return false;
        }
    }
    return true;      // the true has to be out of the loop as if it were in the  looop it would always say that the number is prime 
                      // as even a non  prime number will be will not be divisible by creatin number such as 9 is not divisible by 2 
                    //   but that does not mean it is a prime number 
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