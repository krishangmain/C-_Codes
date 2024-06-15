#include<iostream>
using namespace std;
int main(){
    int p,r,t;
    cout<<"Enter the principal, rate of interest and time respectively";
    cin>>p>>r>>t;
    cout<<((p*r*t)/100.0);
    return 0;
}