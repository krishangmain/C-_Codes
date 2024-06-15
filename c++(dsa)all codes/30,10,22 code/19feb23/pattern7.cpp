#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<n;j++){
            if(i+j<=n-1){
                cout<<j+1;
            }
            else{
                char c=j+'A';
                cout<<c;
            }
        }
        for(int j=0;j<n;j++){
            if(i<=j){
                cout<<n-j;
            }
            else{
                char c=n-j-1+'A';
                cout<<c;
            }
        }
        cout<<endl;
    }
    return 0;
}