#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<2*n;j++){
            char c=n*i+j+'A';
            cout<<c<<" ";
        }
        cout<<endl;
    }
}