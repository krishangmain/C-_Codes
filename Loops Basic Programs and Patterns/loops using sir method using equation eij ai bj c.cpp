#include<iostream>
using namespace std;
int main(){
    // sirs method for loops 
    // we have an equation in the form of 
    // e(ij)=ai + bj +c
    // element at ij is equal to ai +bj +c
    // find out the values of a b and c and with this we have the answer to the loop 
    // traverse the matrix in the form of (row, coulumn)
    // so postion ij means row i and column j 
    // and the values of i and j start with 0
    // whatever is the equation so formed will be what we put into the cout
    int n;
    cin>>n;
    for(int i=0; i<n;i++){
        for(int j=0; j<n;j++){
            cout<<2*i+2*j+1;
        }
        cout<<endl;
    }

   
    

    // this is for the loop which prints 135
                                    //   357
                                    //   579 
    // the value of a is 2 and the value of b is 2 as well and c is 1  



     // for(int i=0; i<n;i++){
    //     for(int j=0; j<n;j++){
    //         cout<<-5*i-1*j+20;
    //     }
    //     cout<<endl;
    // }
        // for loop  20 19 18
        //           15 14 13
        //           10 9  8


         // for(int i=0; i<n;i++){
    //     for(int j=0; j<n;j++){
            // cout<<-i-j+n;  n can also be a part of cout equation
    //     }
    //     cout<<endl;
    // }

     // for(int i=0; i<n;i++){
    //     for(int j=0; j<n;j++){
    //         cout<<ni+nj+n;
    //     }
    //     cout<<endl;
    // }



    
         
}