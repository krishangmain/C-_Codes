#include <iostream>
using namespace std;
int main(){
	int n,s,sqrt;
	cout<<"enter an integer value";
	cin>>n;
	int i=1;
	while(i<=n)
	{
		s=i*i;
		if(s>n)
		{
			sqrt=i-1;
			cout<<sqrt;
			break;
		}
		i=i+1;

	}

	return 0;
}
