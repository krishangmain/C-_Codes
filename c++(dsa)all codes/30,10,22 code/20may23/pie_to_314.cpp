#include<bits/stdc++.h>
using namespace std;
string output="";
void convert(string str,int n,int s=0){
    //base case
    if(s==n){
        return;
    }
    //current work
    if(str[s]=='p'){
        if(str[s+1]=='i'){
            output+="3.14";
            return convert(str,n,s+2);
        }
       
    }
    //recursive call
    output.push_back(str[s]);
    return convert(str,n,s+1);
    
}
int main(){
    string str;
    cin >> str;
    int n=str.size();
    convert(str,n);
    cout << output;
}