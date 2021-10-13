#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#define SONGMAX 5
using namespace std;


int main(){
	char singer;
	string number,song,temp1,temp2;
	vector<string> singername,songname;
	vector<string*> allname;
	fstream inputStream;
	
	inputStream.open("list.txt");
	while(inputStream>>number)
	{
		string asong="",asinger="";
		while(inputStream>>song){
			if(song=="-")
				break;
			else
				asong+=" "+song;
		}
		songname.push_back(asong);
		while(inputStream.get(singer)){
			if(singer=='\n')
				break;
			else
				asinger+=singer;
		}
		singername.push_back(asinger);
	}
	

	for(int i=0;i<singername.size();i++)
	{
		for(int j=0;j<singername.size()-i-1;j++)
		{
			if(singername[j][1]>singername[j+1][1])
			{
				temp1=singername[j];
				singername[j]=singername[j+1];
				singername[j+1]=temp1;
				temp2=songname[j];
				songname[j]=songname[j+1];
				songname[j+1]=temp2;
			}
		}
	}

	for(int j=0;j<singername.size();j++)
	{
		if(singername[j][1]=='n')
		{
			singername.push_back(singername[j]);
			singername.erase(singername.begin()+j);
			songname.push_back(songname[j]);
			songname.erase(songname.begin()+j);
		}
	}

	for(int i=0;i<singername.size();i++)
	{
		cout<<i+1<<"."<<singername[i]<<endl;
		cout<<"    -"<<songname[i];
		cout<<endl;
	}

}
