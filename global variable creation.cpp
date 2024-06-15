#include<iostream>
using namespace std;
int a =-101;
int main(){
    int a =100;
    if(a>1){
        int a =10;
        cout<<a<<endl;
        cout<<"global a"<<::a<<endl;
        ::a+=1000;
        a++;
    }
    cout<<++a<<endl;
    cout<<"global a"<<::a<<endl;
    return 0;
    
}