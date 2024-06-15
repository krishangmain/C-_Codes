#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class car{
public:
	string name;
	int speed;
	bool sunroof;
	char colour[1000];
	car(){
		name="NA";
		speed=0;
		sunroof=false;
		strcpy(colour,"none");
		cout<<"\ncar created\n";
	}

	car(string n,int s,bool sun,char *c){
		cout<<"\ncar created\n";
		name=n;
		speed=s;
		sunroof=sun;
		strcpy(colour,c);
    }

	void print_details(){
		cout<<"name: "<<name<<endl;
		cout<<"speed: "<<speed<<endl;
		cout<<"sunroof: "<<sunroof<<endl;
		cout<<"colour: "<<colour<<endl;
	}

};//always have semicoloum in it

int main(){
	car c1;
	c1.name="audi";
	c1.speed=280;
	c1.sunroof=true;
	char red[]="red";
	strcpy(c1.colour,red);
	c1.print_details();
	car c2;
	c2.print_details();
	char orange[]="orange";
	car c3("mclaren",320,true,orange);
	c3.print_details();

	return 0;
}