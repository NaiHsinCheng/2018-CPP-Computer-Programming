#include<iostream>
#include<vector>
#include<string>
using namespace std;

void A();
void B();
void C();
void D();

class Player{
  public:
	Player(string n,int s);
	string ren();
	int res();
  private:
	string name;	
	int score;
};

vector<Player> v;

int main(){

char c;
cout<<"Enter an option.\n";
cout<<"a. Add new player and score.\n"
    <<"b. Print all players and scores\n"
    <<"c. Search for a player's score.\n"
    <<"d.Remove a player.\n"
    <<"e.Quit.\n";

while(1)
{
	cin>>c;
	cout<<endl;
	switch(c){
		case 'a':
			A();
			break;
		case 'b':
			B();
			break;
		case 'c':
			C();
			break;
		case 'd':
			D();
			break;
		default:
			return 0;
	cout<<endl;
	}

}
}

void A(){
	string name;
	int score;

	cout<<"Enter new player name."<<endl;
	cin>>name;
	cout<<"Enter new player score."<<endl;
	cin>>score;
	
	Player a(name,score);
	v.push_back(a);
}
void B(){
	cout<<"Player Scores\n";
	int i=0;
	while(i<v.size())
	{
		cout<<v[i].ren()<<" "<<v[i].res()<<endl;
		i++;
	}
}
void C(){
	string name;
	int i=0;
	bool check=false;
	cout<<"What player to search for?\n";
	cin>>name;
	while(i<v.size())
	{
		if(v[i].ren()==name)
		{
			check=true;
			cout<<"The score for "<<name<<" is "<<v[i].res()<<endl;
			break;
		}
		i++;
	}
	if(check==false)
		cout<<"Player "<<name<<" not found.\n";
}
void D(){
	cout<<"What player to remove?\n";
	string name;
	int i=0,check=0;
	cin>>name;
	while(i<v.size())
	{
		if(v[i].ren()==name)
		{
			check=1;
			v.erase(v.begin()+i);
			cout<<"Player "<<name<<" removed."<<endl;
			break;
		}
		i++;
	}
	if(check==0)
		cout<<"Player "<<name<<" not found.\n";
}

string Player::ren(){
	return name;
}

int Player::res(){
	return score;
}

Player::Player(string n, int s):name(n),score(s)
{}


