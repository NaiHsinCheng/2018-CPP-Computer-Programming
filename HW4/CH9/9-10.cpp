#include<iostream>
#include<string>
using namespace std;


class Triva{
      private:
		int money;
		string q;
		string a;
      public:
		Triva();
		string getq();
		string geta();
		int getm();
		void setq(string p);
		void seta(string p);
		void setm(int p);
};

int main(){
	Triva t[5];
	int sum=0;
	t[0].setq("Year that Amelia Earhart disappeared?");
	t[0].seta("1938");
	t[0].setm(5);
	t[1].setq("Which season that the children will growth faster?");
	t[1].seta("spring");
	t[1].setm(2);
	t[2].setq("Can human keep the eyes open when sneezeing?");
	t[2].seta("no");
	t[2].setm(5);
	t[3].setq("Which muscle of human's body is most strongth?");
	t[3].seta("tongue");
	t[3].setm(2);
	t[4].setq("What is the 49th state admitted to the USA?");
	t[4].seta("alaska");
	t[4].setm(2);

	cout<<"Triva Game!"<<endl;
	for(int i=0;i<5;i++)
	{
		string Q,A,input;
		Q=t[i].getq();
		A=t[i].geta();
		cout<<"You have $"<<sum<<endl;
		cout<<Q<<endl;
		cin>>input;
		if(input==A)
		{
			cout<<"That's right! You win $"<<t[i].getm()<<endl;
			sum+=t[i].getm();
		}
		else
			cout<<"Sorry, the correct answer is: "<<A<<endl;
	}
	cout<<"Game over. Your total winnings are: $"<<sum<<endl;
}

Triva::Triva(){}

string Triva::getq(){
	return q;
}
string Triva::geta(){
	return a;
}
int Triva::getm(){
	return money;
}
void Triva::setq(string p){
	q=p;
}
void Triva::seta(string p){
	a=p;
}
void Triva::setm(int p){
	money=p;
}

