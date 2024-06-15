#include<iostream>
using namespace std;
int main(){
    char ch[100];
    int count =1 , i = 0; // i is for array itration and count is for no. of words.
     
    gets(ch);
    while(ch[i]!= '\0'){
        if(ch[i] == ' '){
            count++;
        }
        i++;
    }
    cout<<count;



}
//words in char array 