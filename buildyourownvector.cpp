#include<bits/stdc++.h>
using namespace std;
class myvector{
    int *arr;
    int s,c;
    public:
    myvector(){
        s=0;
        c=1;
        arr=new int[1];
    }
    void push_back(int x){
        arr[s++]=x;
        if(s==c){
            int *copyarr=new int[2*c];
            c*=2;
            for(int i = 0; i < s; i++)
            {
                copyarr[i]=arr[i];

            }
            arr=copyarr;

            
        }
    }
};
int main()
{
    
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// class vector_new{
//     public:
//     vector_new(int size){
//         int arr[size];
//     }
//     void shift_forward(){
//         for(int i = 0; i < size; i++)
//         {
//             arr[i+1]=arr[i];
//         }}
//     void shift_backward(){
//         for(int i = size-1; i >=0; i--)
//         {
//             arr[i-1]=arr[i];
//         }
//         }
//     void add_in_front(int n){
//         shift_forward();
//         arr[0]=n;
//     }
//     void add_in_end(int n){
//         shift_backward();
//         [size-1]=n;
//     }
//     void printarray(){
//         for(int i = 0; i < size; i++)
//         {
//             cout<<arr[i];
//         }
        
//     }
// };
// int main()
// {vector_new V1(4);
//     V1.add_in_front(4);
//     V1.add_in_end(3);
//     V1.printarray();



    
//     return 0;
// }
