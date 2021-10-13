#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	char input[50];
	int time[5]={0};
	cout<<"Please input the string : ";
	cin.getline(input,50);
	cout<<left<<setw(8)<<"Vowel"<<"Count\n";
	for(int i=0;i<50;i++)
	{
		if(input[i]=='a')
			time[0]++;
		else if(input[i]=='e')
			time[1]++;
		else if(input[i]=='i')
			time[2]++;
		else if(input[i]=='o')
			time[3]++;
		else if(input[i]=='u')
			time[4]++;
	}
	cout<<left<<setw(8)<<"a"<<time[0]<<endl;
	cout<<left<<setw(8)<<"e"<<time[1]<<endl;
	cout<<left<<setw(8)<<"i"<<time[2]<<endl;
	cout<<left<<setw(8)<<"o"<<time[3]<<endl;
	cout<<left<<setw(8)<<"u"<<time[4]<<endl;
}
