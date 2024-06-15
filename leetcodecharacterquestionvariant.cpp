#include<iostream>
using namespace std;    //1293724
void recursivecall(int n,int *a,char *enc,int s){
    if(s==n){
        cout<<enc;
        return ;
    }
    if(a[s]<2)
    {
        enc[s]="a" +a[s]-1;
    }
    else if(a[s]==2 && a[s+1]<7)
    {
        
    }
    
    
}
// char currrentwork(char next[],int n){
//     char newarray[n];
//     if(next[0]=="a")
//     {
//         newarray[0]="1";
//     }

    
// }
// void recursivecall(char next[]){
//     if(char="")
//     {
//         return;
//     }

    
// }
int main()
{//    char A[]="1293724";
//     currrentwork(A);
//     cout<<A;
    
    return 0;
}
