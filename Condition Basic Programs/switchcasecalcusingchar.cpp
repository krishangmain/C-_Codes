#include<iostream>
using namespace std;
int main(){
    int a,b;
    char c;
    cin>>a>>b>>c;
    switch(c){
        case '+':
        cout<<a+b;
        break;
        case '-':
        cout<<a-b;
        break;
        case '*':
        cout<<a*b;
        break;
        case '/':
        if(b==0) cout<<"errorrrr!!!";
        else cout<<(a*1.0)/b;
        break;
        case '%':
        cout<<a%b;
        break;
        default:
        cout<<"invalid operation";}

    return 0;
}