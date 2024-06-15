#include<bits/stdc++.h>
using namespace std;
int steps=1;
void tower(int n ,char source ,char destination,char helper){
	//base case
	if (n==0){
		return;
	}
	
	//current work
	
	tower(n-1,source,helper,destination);//move n-1 disk from source to helper using destination
	
	//move disk n from source to target

	cout<<steps++<<" move disk "<<n<<" from tower "<<source<<" to tower "<<destination<<endl;	
	
	//recursive call

	tower(n-1,helper,destination,source);//move n-1 disk from helper to destination using source 
	
}
int main(){
	int n = 5;
	char source = 'A',destination ='C',helper = 'B';
	tower(n,source,destination,helper);
	return 0;
}