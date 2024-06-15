#include <iostream>
using namespace std;
void print(char arr[10][10],int m,int n){
	for (int i=0;i<m;i++){
		for(int j=0;j<n;j++)
		cout<<arr[i][j]<<endl;
	}
	cout<<endl;
}
bool print_maze(char arr[10][10],int m,int n,int i,int j){


//base case
if (i==m-1 and j==n-1){
	print(arr,m,n);
	return false;//this will print all solutions 
	return true;//this will print one solution
}
//recursive case
if (arr[i][j+1]!='x' and j+1 <n ){
	arr[i][j+1]='1';
	if(print_maze(arr,m,n,i,j+1))return true;
	arr[i][j+1]='0';
}
if (i+1 < m and arr[i+1][j]!='x'){
    arr[i+1][j]='1';
	if(print_maze(arr,m,n,i+1,j))return true;
	arr[i+1][j]='0';
}
return false;
}
int main(){
	char arr[10][10]= {
		"0000",
		"00xx",
		"0000",
		"xx00"
	};
	int m =4,n =4;
	arr[0][0]='1';
	print_maze(arr,m,n,0,0);
	return 0;
}