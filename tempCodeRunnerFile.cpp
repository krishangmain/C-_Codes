#include<iostream>
using namespace std;
int main(){
    int n ; //always taken input in the form of n follows for most loops
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j>=n-1){       //very very important
            cout<<2*i+2*j+1<<" ";}
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

// this is for lower right and upperleft triangular patterns
