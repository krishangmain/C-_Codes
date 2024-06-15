#include<bits/stdc++.h>
using namespace std;
bool ispossibleanswer(int mid,vector<int>v){
	int curr=0;
	for(int i=0;i<v.size();i++){
		if(v[i]>=mid){
			curr++;
		}
		else{
			curr=0;
		}
		if(curr==mid){
			return true;
		}
	}
	return false;
}
int main(){
	int n;
	cin>>n;
	vector<int>v(n,0);
	for (int i=0;i<n;i++){
		cin>>v[i];
	}
	int s=1,e=n,ans;
	while(s<=e){
		int mid=(s+e)/2;
		if(ispossibleanswer(mid,v)){
			ans=mid;
			s=mid+1;
		}
		else{
			e=mid-1;
		}
	}
		cout<<ans;
}
//inter square