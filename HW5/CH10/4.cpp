#include<iostream>
#include<string>
using namespace std;

typedef string* StrPtr;

class Subscriber{
	private:
		string name;
		int numChannels;
		StrPtr channelList;
	public:
		Subscriber(){}
		Subscriber(string n, int num);
		Subscriber(const Subscriber& c);
		string getname() const {return name;}
		int getnumChannels() const{ return numChannels;}
		void input();
		void reset();
		void output();
		~Subscriber();
		void operator =(const Subscriber s);
};

int main()
{
	Subscriber s1;
	s1.input();
	cout << "Student 1's data:\n";
	s1.output();
	Subscriber s2(s1);
	cout << "Student 2's data after assignment from student 1:\n";
	s2.output();
	s1.reset();
	cout << "Student 1's data after reset:\n";
	s1.output();
	cout << "Student 2's data, should still have original classes:\n";
	s2.output();
}

Subscriber::Subscriber(string n, int num){
	name=n;
	numChannels=num;
	channelList=new string[numChannels];
}

void Subscriber::input(){
	string n;
	cout<<"Enter person name."<<endl;
	cin>>name;
	cout<<"Enter number of channels."<<endl;
	cin>>numChannels;
	channelList=new string[numChannels];
	for(int i=0;i<numChannels;i++)
	{
		cout<<"Enter name of channel "<<i+1<<endl;
		cin>>channelList[i];
	}
}

void Subscriber::reset(){
	numChannels=0;
	channelList=NULL;
}
void Subscriber::output(){
	cout<<"Name: "<<name<<endl;
	cout<<"Number of classes: "<<numChannels<<endl;
	for(int i=0;i<numChannels;i++)
	{
		cout<<"Class "<<i+1<<':'<<channelList[i]<<endl;
	}
	cout<<endl;
}

Subscriber::Subscriber(const Subscriber& c){
	name=c.getname();
	numChannels=c.getnumChannels();
	channelList=new string[numChannels];
	for(int i=0;i<numChannels;i++)
	{
		channelList[i] = c.channelList[i];
	}
}

void Subscriber::operator =(const Subscriber s)
{
	name = s.name;
	numChannels = s.numChannels;
	channelList = new string[numChannels];
	for(int  i = 0;i < s.numChannels;i++)
	{
		channelList[i] = s.channelList[i];
	}
}

Subscriber::~Subscriber(){
	delete [] channelList;
}

