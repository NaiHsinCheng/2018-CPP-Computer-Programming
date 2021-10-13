#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int getPlayerScore(string find)
{
	int score,no=1;
	string Name;
	fstream inputStream;
	inputStream.open("scores.txt");
	while(inputStream>>Name>>score)
	{
		if(Name==find)
		{
			inputStream.close();
			return score;
		}
		else
			no=0;
	}
	if(no==0)
	{
		inputStream.close();
		return 0;
	}
}
void ave(int score,int avee)
{
	if(score>avee)
		cout<<score<<" is higher than average\n";
	else if(score==avee)
		cout<<score<<" is same with average\n";
	else
		cout<<score<<" is below than average\n";
}

int main()
{
	int avee=0,num=0,score=0;
	string name;
	fstream inputStream;
	inputStream.open("scores.txt");
	while(inputStream>>name>>score)
	{
		avee+=score;
		num++;
	}
	avee/=num;
	cout<<"Average is "<<avee<<endl;
	
	while(1){
		cout<<"Please enter player's name: ";
		cin>>name;
		if(getPlayerScore(name)==0)
			cout<<"The player is not found in the file.\n";
		else 
		{
			int a=getPlayerScore(name);
			cout<<name<<" : ";
			ave(a,avee);
		}
	}
}
