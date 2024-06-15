#include<iostream>
using namespace std;
  int factorial  ( int n){
       int ans=1;
       for(int i=1; i<=n; i++){
           ans *= i ;
       }
       return ans;}
int ncr(int n, int r){
    int ans=factorial(n)/(factorial(n-r)*factorial(r));
    return ans;
}
int main(){
    int a = ncr(5,2);
    cout<<a;
    
}