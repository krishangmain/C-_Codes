// call by value
#include<iostream>
using namespace std;


int main(){
int a =20;
int &b=a;
int c=1;
int &d=c;
int &e=a;
e++;
b++;
c++;
d++;
cout<<a<<endl;
cout<<b<<endl;
cout<<c<<endl;
cout<<d<<endl;
cout<<e<<endl;
}