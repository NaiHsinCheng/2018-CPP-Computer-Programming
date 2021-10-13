#include<iostream>
#include<cstdlib>
using namespace std;

class Player{
	public:
		virtual int getGuess(){ return 0;}
};

class HumanPlayer:public Player{
	public:
		int getGuess(){
			int c;
			cin>>c;
			return c;
		}
};

class ComputerPlayer:public Player{
	public:
		int getGuess(){
			int c;
			c=rand()%100;
			cout<<c<<endl;
			return c;
		}
};

bool checkForWin(int guess,int answer)
{
	if(answer==guess)
	{
		cout<<"You're right!You win!"<<endl;
		return true;
	}
	else if(answer<guess)
		cout<<"Your guess is too high."<<endl;
	else
		cout<<"Your guess is too low."<<endl;
	return false;
};

void play(Player &player1,Player &player2,int c)
{
	int answer=0,guess=0;
	answer=rand()%100;
	bool win=false;
	while(!win)
	{
		if(c==1||c==2)
			cout<<"Player 1's turn to guess."<<endl;
		else if(c==3)
			cout<<"The computer guesses ";
		guess = player1.getGuess();
		win=checkForWin(guess,answer);
		if(win) return;
		
		if(c==1)
			cout<<"Player 2's turn to guess."<<endl;
		else if(c==2||c==3)
			cout<<"The computer guesses ";
		guess=player2.getGuess();
		win=checkForWin(guess,answer);
	}
	
}

int main(){
	HumanPlayer p1,p2;
	ComputerPlayer c1,c2;
	cout<<"Chose 1>human&human  2>human&computer  3>computer&computer"<<endl;
	int c;
	cin>>c;
	if(c==1)
		play(p1,p2,c);
	else if(c==2)
		play(p1,c1,c);
	else
		play(c1,c2,c);

}
