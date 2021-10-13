#include<iostream>
#include<string>
#include<vector>
using namespace std;

void split(string s,vector<string>& buf);

int main(){
	string input,str;
	vector<string> v;

	while(getline(cin,input)){
		if(input=="exit")
			break;
		else
			split(input,v);
		for(int i=0;i<v.size();i++)
		{
			if(v[i].length()==4&&((v[i][3]<=122&&v[i][3]>=97)||(v[i][3]<=90&&v[i][3]>=65)))
			{
				if(v[i][0]<97)
					v[i]="Love";
				else
					v[i]="love";
			}
			else if(v[i].length()==5&&!(v[i][4]<=122&&v[i][4]>=65))
			{
				string L="Love",l="love";
				char t=v[i][4];
				if(v[i][0]<97)
					v[i]=L+t;
				else
					v[i]=l+t;
			}
		}
		for(int i=0;i<v.size();i++)
		{
			cout<<v[i]<<' ';
		}
		cout<<endl;
		v.clear();
	}
}

void split(string s, vector<string>& buf)
{
	int current=0;
	int next;
	while(1){
		next=s.find_first_of(' ',current);
		if(next!=current){
			string temp=s.substr(current,next-current);
			if(temp.size()!=0)
				buf.push_back(temp);
		}
		if(next==string::npos)  break;
		current=next+1;
	}

}
