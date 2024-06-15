// functions for celcius and farenhiet 
#include<iostream>
using namespace std;
// int main(){
//     int init , fval , step , cel;
//     cin >> init >> fval>> step;

//     int far=init;
//     while(far<=fval){
//         cel=(far-32)*(5/9.0);
//         cout <<far<<" "<<cel<<endl;
//         far=far+step;
//     }
// }

// same with functions
 void printtable(int init , int fval , int step ){
    int far = init;
    while(far<=fval){
        cel= (5.0/9.0)*(far-32);
        cout<<far<<" "<<cel<<endl;
        far=far+step;
    }
 }

 int main(){
    int init , fval ,step ;
    cin >>init>>fval >>step;
    printtable(init , fval , step);
    return 0;
 }