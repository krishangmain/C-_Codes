#include<bits/stdc++.h>
using namespace std;
void solve (string input,int index,string curr){
	if (index==input.length())return;
	solve(input,index+1,curr);
	curr.push_back(input[index]);
	cout<<curr<<endl;
	solve(input,index+1,curr);
}
int main(){
	string s;
	cin>>s;
	solve (s,0,"");
	return 0;
}