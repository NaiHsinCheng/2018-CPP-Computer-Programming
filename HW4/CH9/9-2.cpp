#include<iostream>
#include<string>
using namespace std;



int main(){
	string input;
	while(getline(cin,input)){
		if(input=="-1")
			break;
		else
		{
			for(int i=0;i<input.length();i++)
			{
				if(input[i]<=122&&input[i]>=97)
				{
					if(input[i]+3>122)
						input[i]=input[i]+3-26;
					else
					input[i]+=3;
				}
				else if(input[i]<=90&&input[i]>=65)
				{
					if(input[i]+3>98)
						input[i]=input[i]+3-26;
					else
					input[i]+=3;
				}
				else if(input[i]>=48&&input[i]<=57)
				{
					input[i]=(input[i]-48+5)%10+48;
				}
				else if(input[i]==' ' || input[i]=='\n')
					input[i]=0;
				else
					input[i]=' ';
			}
		}
		cout<<input<<endl;	
	}
}

