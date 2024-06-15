#include<bits/stdc++.h>
using namespace std;
bool ispossibleanswer(int mid,vector<int>v,int m){
	int lastallocated=v[0],cowcount=1;
	for (int i=0;i<v.size();i++){
		if(v[i]-lastallocated>=mid){
			lastallocated=v[i];
			cowcount++;
			if(cowcount==m){
				return true;
			}
		}
	}
	return false;
}
int main(){
	int n,m;
	cin>>n>>m;
	vector<int>v(n,0);
	for (int i=0;i<n;i++){
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	int s=1,e=v[n-1]-v[0],ans=-1;
	while(s<=e){
		int mid=(s+e)/2;
		if(ispossibleanswer(mid,v,m)){
			ans=mid;
			s=mid+1;
		}
		else{
			e=mid-1;
		}
	}
		cout<<ans;
}