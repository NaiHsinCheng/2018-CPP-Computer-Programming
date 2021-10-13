#include<iostream>
#include<cstring>
using namespace std;

int time(int start,int end)
{
	if(start/100 > end/100)
	{
		return time(start,0000)+time(0000,end);
	}
	else if(start/100 == end/100)
	{
		if(start%100 > end%100)
			return time(start,0000)+time(0000,end);
		else
			return end%100-start%100;
	}
	else
	{
		if(start%100 > end%100)
		{
			return (end/100-start/100-1)*60+60+end%100-start%100;
		}
		else
			return (end/100-start/100)*60+end%100-start%100;
	}
}

int main()
{
	string start,end;
	cout<<"Please input start time and end time:";
	cin>>start>>end;
	int s=stoi(start),e=stoi(end);
	if(start.length()!=4||end.length()!=4||s/100>23||e/100>23||s%100>59||e%100>59)
		cout<<"The time is error\n";
	else
	{
		int time_r=time(s,e);
		cout<<"The time difference between "<<start<<" and "<<end<<" is "<<time_r<<" minutes."<<endl;
	}
	cout<<start.length()<<end.length();
}
