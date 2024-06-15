#include<iostream>
using namespace std;
// int main(){
//     int n ; 
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0; j<=i;j++){  //for lower diagonal left corner
//             cout<<j+1<<" ";
//         }
//         cout<<endl;
//     }
// }



int main(){
    int n ; 
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0; j<n;j++){    //for upper diagonal right corner
            if (j>=i){
                
            cout<<j+1<<" ";}
            else{
                cout<<"  "; }}         //here we add two spaces as we 
                 cout<<endl;           //have already added 1 space in between 1 and 2 
                 }                      //in the cout above
}
    
// we follow the same pattern but to understand what we did here is to understand that
// that in lower diagonal i is always greater than j and the opposite in the upper corner 
// utilize that in code as above 


