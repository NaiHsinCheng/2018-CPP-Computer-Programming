#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;

struct emp{
int num;
double core;
double performance;
double ideation;
double count=0;
int level;
};

int main(){
	string word[4];
	fstream inputStream;
	emp people;

	inputStream.open("CH6_01_data.txt");
	inputStream>>word[0]>>word[1]>>word[2]>>word[3];
	cout<<left<<setw(9)<<"Number"<<left<<setw(9)<<"Total"<<"Point"<<endl;
	while(inputStream>>people.num>>people.core>>people.performance>>people.ideation)
	{
		people.count=50*people.performance/30+30*people.core/10+20*people.ideation/10;
		if(people.count>=80)
			people.level=1;
		else if(people.count>=60)
			people.level=2;
		else if(people.count>=50)
			people.level=3;
		else
			people.level=4;
		cout<<left<<setw(9)<<people.num<<left<<setw(9)<<people.count<<people.level<<endl;
	}
	inputStream.close();
	return 0;

}
