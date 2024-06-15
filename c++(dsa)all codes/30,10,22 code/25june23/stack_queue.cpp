#include<bits/stdc++.h>
using namespace std;
int main(){
	stack<int>s;
	int n;
	cin>>n;
	for (int i=0;i<n;i++){
		int x;
		cin>>x;
		s.push(x);
	}
	s.push(5);
	s.push(2);
	s.push(3);
	s.push(1);
	s.push(4);
	cout<<s.size()<<endl;
	s.pop();
	cout<<s.size()<<" "<<s.top();

	queue<int>q;
	int n;
	cin>>n;
	for (int i=0;i<n;i++){
		int x;
		cin>>x;
		q.push(x);
	}
	q.pop();
	cout<<s.size()<<" "<<q.front()<<" "<<q.back();
	vector<stack<int>>v
}