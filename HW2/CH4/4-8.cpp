#include<iostream>
#include<cstring>
using namespace std;

void input(double &kg, double &g)
{
	cout<<"Input Weight<kg>:";
	cin>>kg;
	cout<<"Input Weight<g>:";
	cin>>g;
}

void output(int p, double o)
{
	cout<<"Weight: "<<p<<" pound and "<<o<<" ounces\n\n";
}

double cal(double &kg, double &g,int &p, double &o)
{
	
	p=kg*2.2046+g*2.2046/1000;
	o=(kg*2.2046+g*2.2046/1000-p)*16;
}

int main()
{
	string keep="yes";
	double kg,o,g;
	int p;
	while(keep=="yes")
	{
		input(kg,g);
		cal(kg, g,p, o);
		output(p,o);
		cout<<"keep calculating? yes/no\n";
		cin>>keep;	
	}
}
