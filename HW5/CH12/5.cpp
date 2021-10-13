#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
	ifstream inStream;
	ofstream outStream;
	string name;

	cout<<"Enter a file name:";
	cin>>name;
	string out=name+"_out";
	cout<<"Build "<<out<<endl;
	inStream.open(name);
	outStream.open(out);

	int data;
	int num=0;	
	while(inStream>>data)
	{
		if(data==3+4*num)
		{
			outStream<<data<<endl;
			num++;
			
		}
		else
		{
			exit(1);
		}
	}
}
