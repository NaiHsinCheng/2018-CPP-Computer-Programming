#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


int YouRollDice(){
	srand(time(NULL));
	int die=rand()%6+1;
        cout<<"You rolled "<<die<<endl;
        return die;
}
int ComRollDice(){
        int die=rand()%6+1;
        cout<<"The computer rolled "<<die<<endl;
        return die;
}


int humanTurn(int humanTotalScore){
	char input;
	cout<<"It's your turn!   Enter 'r' to roll.\n";
	int die,count=0;
	cin>>input;
	while(input=='r'){
		die=YouRollDice();
		if(die==1)
		{
			cout<<"You lose your turn.\n";
			return humanTotalScore;
		}
		else
		{
			count+=die;
			cout<<"Your score this round is :"<<count<<endl;
			cout<<"If you hold, your total score would be: "<<count+humanTotalScore<<endl;
			cout<<"Press 'h' to hold or 'r' to roll again.\n";
			cin>>input;
		}
	}
	 if(input=='h'){
                   humanTotalScore=count+humanTotalScore;
                   return humanTotalScore;
	 }
	 else if(input!='r'&&input!='h')
		exit(1);
}

int computerTurn(int computerTotalScore){
	cout<<"It's the computer turn!"<<endl;
	int count=0,die;
	while(count<20)
	{
		die=ComRollDice();
		if(die==1)
		{
			cout<<"The computer lose its turn.\n";
			return computerTotalScore;
		}
		else
		{
			count+=die;
			cout<<"The computer's score this round is: "<<count<<endl;
			cout<<"If the computer holds, its total score would be: "<<count+computerTotalScore<<endl;
		}
	}
		cout<<"The computer holds.   Enter 'c' to continue.\n";
		computerTotalScore=count+computerTotalScore;
		char input;
		cin>>input;
		if(input=='c')
			return computerTotalScore;
}


int main()
{
	int htotal=0,comtotal=0;
	htotal=humanTurn(htotal);
	while(htotal<100)
	{
		cout<<endl;
		comtotal=computerTurn(comtotal);
		if(comtotal<100)
		{
			cout<<endl;
			htotal=humanTurn(htotal);
		}
		else
		{
			cout<<"Sorry,the computer won.\n";
				break;
		}
	}
	if(comtotal<100)
	{
		cout<<"You win!!!!!!!!!!!!!\n";
	}

	
}

