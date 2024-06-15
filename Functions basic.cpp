#include <iostream>
using namespace std;

    // functions
    void helloworld(){
        cout<<"Hello world ";
    }
    int sum(int a,int b){
        int sum=a+b;
        return sum;
    }
    int main() {
        helloworld();
        int a= sum(10,20);
        cout<<a;
    
}