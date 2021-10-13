#include<iostream>
#include<cstring>
using namespace std;

void input(double &inp, double &ino)
{
	cout<<"Input pound:";
	cin>>inp;
	cout<<"Input ounces:";
	cin>>ino;
}

void output(int rkg, double rg)
{
	cout<<"Weight: "<<rkg<<"kg and "<<rg<<"g\n\n";
}

double cal(double &inp, double &ino,int &rkg, double &rg)
{
	
	rkg=(inp+(ino/16))/2.2046;
	rg=((inp+(ino/16))/2.2046-rkg)*1000;
}

int main()
{
	string keep="yes";
	double inp,ino,rg;
	int rkg;
	while(keep=="yes")
	{
		input(inp,ino);
		cal(inp, ino,rkg, rg);
		output(rkg,rg);
		cout<<"keep calculating? yes/no\n";
		cin>>keep;	
	}
}
