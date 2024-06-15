#include<iostream>
using namespace std;
int main(){
	char x;
	cin>>x;
	int a , b;
	while(true){
		if(x == 'x' or x == 'X') break;
		
		else if(x == '+'){
			cin>>a>>b;
			int ans = a+b;
			cout<<to_string(ans)<<endl;
		}
		else if(x == '-'){
			cin>>a>>b;
			int ans = a-b;
			cout<<to_string(ans)<<endl;
		}
		else if(x == '*'){
			cin>>a>>b;
			int ans = a*b;
			cout<<to_string(ans)<<endl;
		}
		else if(x == '/'){
			cin>>a>>b;
			int ans = a/b;
			cout<<to_string(ans)<<endl;
		}
		else if(x == '%'){
			cin>>a>>b;
			int ans = a%b;
			cout<<to_string(ans)<<endl;
		}
		else{
			cout<<"Invalid operation. Try again."<<endl;
		}
		cin>>x;
	}
}