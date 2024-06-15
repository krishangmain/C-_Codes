#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float a,b,c,d,ans,ans1;
    cout<<"enter the coresponding co-efficients of the quadractic:";
    cin>>a>>b>>c;           //dont write pow(x,1/2) write either 1.0/2 or 1/2.0 or simply 0.5
    d=(b*b)-4*a*c;
    if(d>0){
        ans= (-b + pow(d,0.5))/2*a;
        ans1=(-b - pow( d,0.5))/2*a;
        cout<<"the two real roots are:"<<ans<<ans1;
    }
    else if(d==0){
        ans=(-b)/2*a;
        cout<<"the two real equal solution0"<<ans;
    }
    else{
        cout<<(-b)/2*a<<"+i"<<pow(-d,0.5)/2*a<<endl;
        cout<<(-b)/2*a<<"-i"<<pow(-d,0.5)/2*a;
        


    }
    return 0;
}