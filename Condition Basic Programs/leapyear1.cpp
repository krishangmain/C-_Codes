#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    if(x%4==0){
        if(x%100==0){

            if(x%400==0){
                cout<<"the year is a leap year";
            }
            else{
                cout<<"Not a leap year";
            }
        }
        else{{
            cout<<"this year is a leap year";
        }}
    }
    else{
        cout<<"The year is not a leap year";
    }
}