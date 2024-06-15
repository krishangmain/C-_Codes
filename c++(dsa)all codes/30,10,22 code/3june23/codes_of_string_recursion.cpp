#include<bits/stdc++.h>
using namespace std;
string encoder(string number){
    string output;
    // "1"->1
    // stoi
    // 'a'+12
    // 'l'->"l"
    int temp=stoi(number);
    char c='a'+temp-1;
    output.push_back(c);
    // ""+ 'k' => "k"
    //stoi - coverts string to integer
    //to_string() - covert integer to string
    return output;
}
void print_all_codes(string number, string output, string balance, int index){
    if(index==number.length() && balance.length()>0){
        return;
    }
    if(index==number.length()){
        cout<<output<<endl;
        return;
    }
    string curr=balance+number[index];
    if(stoi(curr)>26)return;
    print_all_codes(number, output + encoder(curr), "", index+1);
    print_all_codes(number, output, curr, index+1);
}
int main(){
    string str;
    cin>>str;
    print_all_codes(str, "", "", 0);
    return 0;
}