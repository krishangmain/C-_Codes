#include <iostream>
using namespace std;
 int length(char s[]){
	int l = 0;
	for (; ; l++){
		if(s[l]=='\0')
			return l;
	}
}
int main(){
	char s[100];
	cin.getline(s,100);
	cout<<length(s)<<endl;
	char k;
	cin.get();
	cin.get(k);
	cout<<k;
	
	return 0;
}