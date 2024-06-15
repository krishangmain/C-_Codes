#include <iostream>
using namespace std;
void print_all_permutation(char arr[],int n,int j){
	//base case
	if(arr[j]=='\0'){
			cout<<arr<<endl;
		}
		cout<<endl;
		return;
	}
	//recursive case
