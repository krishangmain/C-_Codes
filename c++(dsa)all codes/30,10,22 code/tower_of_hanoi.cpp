#include <iostream>
using namespace std;
//minimum move 2^n-1
int steps=1;
int tower_of_hanoi(int n,char source,char target,char helper){
	//base caes
	if (n==0){
		return 0;
	}
	//recursive case
	//move n-1 disk from source to helper using target
tower_of_hanoi(n-1,source,helper,target);
	//move disk n from source to target
cout<<steps++<<" move disk "<<n<<" from tower "<<source<<" to tower "<<target<<endl;
	//move n-1 disk from helper to target using source 
tower_of_hanoi(n-1,helper,target,source);
	//finding the solution
}
int main(){
	int n = 5;
	char s = 'A',t ='C',h = 'B';
	tower_of_hanoi(n,s,t,h);
	//cout<<"move disk"<<n<<"from tower"<<source<<"to tower"<<target<<endl;
	return 0;
}