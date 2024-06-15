#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=0;
	int j=0;
	int count=1;
	int count2=n*n+1;
	for(i=0;i<=n;i++){
		for(j=0;j<n;j++){
			if(i<=j){
			 cout<<count++<<" ";
			}
			else{
				cout<<"  ";
			}

		}
		for(int j=0;j<n;j++){
            if(i+j<=(n-1)){
            	cout<<count2+j<<" ";

            }

            else{
				cout<<"  ";
			}

        }

       	cout<<endl;

		count2-=n-i-1;
		
	
	}
	return 0;
}