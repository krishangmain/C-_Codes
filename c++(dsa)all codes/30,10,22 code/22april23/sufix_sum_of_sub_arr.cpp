#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int l,r;
	int arr[n];
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}
	int sum[n];
	sum[n-1]=arr[n-1];
	for (int i=n-2;i>=0;i--){
		sum[i]=sum[i+1]+arr[i];
	}
	int t;
    cout<<"no of tests : ";
    cin>>t;

    while(t--){
        cout<<"Enter l and r :";
        cin>>l>>r;
        if(r==n-1){
            cout<<sum[l]<<endl;;
            
        }
        else{
            cout<<sum[l]-sum[r+1]<<endl;;
            //[l.....r]=[l.....n-1]-[r+1......n-1]
        }
        

    }

}