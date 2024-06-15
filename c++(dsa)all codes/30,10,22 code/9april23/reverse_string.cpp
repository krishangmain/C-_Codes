#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	getline(cin,a);
	int len=a.length();
	string rev = " ";
	for (int i=0;i<len;i++){
		char b= a[len-i-1];
		rev.push_back(b);
		a.pop_back();
	}
	cout<<rev;
	return 0;
}