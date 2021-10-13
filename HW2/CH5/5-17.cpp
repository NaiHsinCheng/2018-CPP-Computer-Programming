#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string>
#include<math.h>
using namespace std;

int main()
{
	ofstream file;
	int count[10]={0},z[200]={0};
	string a[200]={};
	file.open("Data.txt");
	for(int i=0;i<200;i++)
	{
		z[i]=rand()%2;
		if(z[i]==0)
			a[i]='0'+to_string(rand());
		else
			a[i]=to_string(rand());
		file<<a[i]<<endl;
	}
	file.close();
	fstream input;
	char c;
	string cc;
	int n=0;
	input.open("Data.txt");
	while(input>>c>>cc)
	{
		switch(c){
			case '0':
				count[0]++;
				break;
			case '1':
				count[1]++;
				break;
			case '2':
				count[2]++;
				break;
			case '3':
				count[3]++;
				break;
			case '4':
				count[4]++;
				break;
			case '5':
				count[5]++;
				break;
			case '6':
				count[6]++;
				break;
			case '7':
				count[7]++;
				break;
			case '8':
				count[8]++;
				break;
			case '9':
				count[9]++;
				break;

		}
			n++;
	}
	for(int i=0;i<10;i++)
	{
		cout<<i<<"\t"<<(double)count[i]/n*100<<endl;
	}
}

