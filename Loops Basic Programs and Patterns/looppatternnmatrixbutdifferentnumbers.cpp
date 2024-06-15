#include<iostream>
using namespace std;
int main(){
    int n ; //always taken input in the form of n follows for most loops
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0; j<n;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}