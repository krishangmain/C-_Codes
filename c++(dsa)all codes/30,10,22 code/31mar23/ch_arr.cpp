#include<bits/stdc++.h>
using namespace std;
int main(){
char ch[100];
gets(ch);
int i=1;
int j=1;
int p=ch[0];
while (ch[i]!='\0'){
	if (p==' ' && ch[i]==' ');
	else{
		ch[j]=ch[i];
		j++;
		p=ch[i];
	}
	i++;
}
ch[j]='\0';
cout<<ch;
	return 0;
}
//remove extra space ch arr