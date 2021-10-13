#include<iostream>
#include<cstring>
using namespace std;

void input2(double &kg, double &g)
{
	cout<<"Input Weight<kg>:";
	cin>>kg;
	cout<<"Input Weight<g>:";
	cin>>g;
}

void output2(int p, double o)
{
	cout<<"Weight: "<<p<<" pound and "<<o<<" ounces\n\n";
}

double cal2(double &kg, double &g,int &p, double &o)
{
	
	p=kg*2.2046+g*2.2046/1000;
	o=(kg*2.2046+g*2.2046/1000-p)*16;
}

void input1(double &inp, double &ino)
{
	cout<<"Input pound:";
	cin>>inp;
	cout<<"Input ounces:";
	cin>>ino;
}

void output1(int rkg, double rg)
{
	cout<<"Weight: "<<rkg<<"kg and "<<rg<<"g\n\n";
}

double cal1(double &inp, double &ino,int &rkg, double &rg)
{
	
	rkg=(inp+(ino/16))/2.2046;
	rg=((inp+(ino/16))/2.2046-rkg)*1000;
}

int main()
{
	string keep="yes";
	while(keep=="yes"){
		int chose;
		double inb,ins,rs;
		int rb;
		cout<<"If you want conver pound and ounces to kg and g,enter 1\n";	
		cout<<"If you want conver kg and g to pound and ounces,enter 2\n";
		cin>>chose;
		if(chose==1)
		{
			input1(inb,ins);
			cal1(inb, ins,rb, rs);
			output1(rb,rs);
		}
		else
		{
			input2(inb,ins);
			cal2(inb, ins,rb, rs);
			output2(rb,rs);
		}
		cout<<"keep calculating?yes/no\n";
		cin>>keep;
	}
}





