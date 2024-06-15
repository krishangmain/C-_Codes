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
	sum[0]=arr[0];
	for (int i=0;i<n;i++){
		sum[i]=sum[i-1]+arr[i];
	}
	int t;
    cout<<"no of tests : ";
    cin>>t;

    while(t--){
        cout<<"Enter l and r :";
        cin>>l>>r;
        if(l==0){
            cout<<sum[r]<<endl;;
            
        }
        else{
            cout<<sum[r]-sum[l-1]<<endl;;
            //[l.....r]=[0.....r]-[0......l-1]
        }
        

    }

}