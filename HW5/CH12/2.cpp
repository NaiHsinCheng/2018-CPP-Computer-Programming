#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
while(1){
	ifstream inStream;
	string name;
	double sum=0;
	int num=0;
	double data;
	cout<<"Enter a file name :";
	cin>>name;
	inStream.open(name);

	if(inStream.fail())
	{
		cout<<"Can't open file "<<name<<endl;
		exit(1);
	}
	
	while(inStream>>data)
	{
		sum+=data;
		num++;
	}
	cout<<"Average of "<<num<<" numbers is "<<sum/num<<endl;
}	
}
