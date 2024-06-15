#include<bits/stdc++.h>
using namespace std;
int main(){
	stack<int>s;
	queue<int>q;
	int n;
	cin>>n;
	for (int i=0;i<n;i++){
		int x;
		cin>>x;
		q.push(x);
	}
	while (q.size()){
		s.push(q.front());
		q.pop();
	}
	while(s.size()){
		q.push(s.top());
		s.pop();
	}
	int n=q.size();
	for(int i=0;i<n;i++){
		int x=q.front();
		cout<<x<<" ";
		q.pop();
		q.push(x);
	}
	while (q.size()){
		cout<<q.front()<<" ";
		q.pop();
	}
}