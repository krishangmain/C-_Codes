#include<bits/stdc++.h>
using namespace std;
int main(){
	int count;
	string s;
	getline (cin,s);
	int len=s.length();
	string s2;
	for(int i=0;i<len;i=i+count){
		count=1;
		s2.push_back(s[i]);
		for (int j=i+1;;j++){
			if (s[i]==s[j]){
				count++;

			}
			else break;
		}
		if (count!=1){
			char c='0'+count;
			s2.push_back(c);
		}
	}
	cout<<s2;
	return 0;
}