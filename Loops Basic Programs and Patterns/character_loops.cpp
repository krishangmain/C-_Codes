
//     equation for patterns 
//     eij + ai +bj +c +character which is usually A or a
//     now once we have done that the answer willl be cout in integer values 
//     which we dont want to combact that what we do is we initialize another 
//     variable char p which would hold the value of the equation and then
//     we will cout p itslef
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0; j<n;j++){    // ABC
            char c= j +'A';       // ABC
            cout<<c<<" ";         // ABC
        }
        cout<<endl;
    }
}

// int main(){
//     int n; 
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0; j<n;j++){
//             char c= -i-j+25+'A';  for pattern ZYX
                                            //   YXW
                                            //   XWV
//             cout<<c<<" ";
//         }
//         cout<<endl;
//     }
// }