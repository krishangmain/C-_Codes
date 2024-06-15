#include<iostream>
using namespace std;
int main() {
	int a,b,c;
	cin>>a>>b>>c;
	int best=a;
	if (b>best)
	{
		best=b;
	}
	if (c>best)
	{
		best=c;		
	}
	cout<<best;
	
	
	return 0;
}