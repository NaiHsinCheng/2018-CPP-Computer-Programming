#include<iostream>
#include<string>
#include<vector>
using namespace std;


class Television{
	private:
		string displayType;
		double dimension;
		string *connectivitySupport;
		int numMod;
	public:
		Television(string,double,string[],int);
		Television(const Television &c);
		void Enter(int index);
		void output();
		string getdisplayType() const{ return displayType;}
		double getdimension() const{ return dimension;}
		int getnumMod() const{ return numMod;}
		~Television();
		
};

int main()
{
	string displayType;
	double dimension;
	int numMod;
	cout<<"Enter default TV display type :"<<endl;
	cin>>displayType;
	cout<<"Enter default TV Dimension :"<<endl;
	cin>>dimension;
	cout<<"Enter the number of connectivity modes :"<<endl;
	cin>>numMod;
	string connectivitySupport[numMod];
	cout<<"Enter the number of connectivity support types :"<<endl;
	for(int i=0;i<numMod;i++)
	{
		cin>>connectivitySupport[i];
	}
	Television def(displayType,dimension,connectivitySupport,numMod);
	cout<<"Default TV mode :"<<endl;
	def.output();

	int num,index;
	cout<<"Enter TV numbers :";
	cin>>num;
	vector <Television>TV;
	for(int i=0;i<num;i++)
	{
		Television tv(def);
		TV.push_back(tv);
	}

	for(int i=0;i<num;i++)
	{
		cout<<"Enter index of TVs required of custimization(input -1 to end)"<<endl;
		cin>>index;
		if(index==-1)
			break;
		TV[i].Enter(index);
	}
	cout<<endl;
	for(int i=0;i<num;i++)
	{
		cout<<"TV#"<<i<<endl;
		TV[i].output();
	}
}


Television::Television(string st,double sm,string cs[],int n){
	displayType=st;
	dimension=sm;
	numMod=n;
	connectivitySupport=new string[numMod];
	for(int i=0;i<n;i++)
	{
		connectivitySupport[i]=cs[i];
	}
}
Television::Television(const Television &c){
	displayType=c.getdisplayType();
	dimension=c.getdimension();
	numMod=c.getnumMod();
	connectivitySupport=new string[numMod];
	for(int i=0;i<numMod;i++)
	{
		connectivitySupport[i]=c.connectivitySupport[i];
	}
	
}

void Television::Enter(int index){
	cout<<"ENter TV#"<<index<<" display type :"<<endl;
	cin>>displayType;
	cout<<"ENter TV#"<<index<<" Dimension :"<<endl;
	cin>>dimension;
	cout<<"Enter the number of connectivity modes :"<<endl;
	cin>>numMod;
	cout<<"ENter TV#"<<index<<" connectivity support types :"<<endl;
	for(int i=0;i<numMod;i++)
	{
		cin>>connectivitySupport[i];
	}
}
void Television::output(){
	cout<<"Display type :"<<displayType<<endl;
	cout<<"Dimension(inches): "<<dimension<<endl;
	cout<<numMod;
	cout<<"connectivity support types :"<<endl;
	for(int i=0;i<numMod;i++)
	{
		cout<<connectivitySupport[i]<<endl;
	}
}
Television::~Television(){
	delete [] connectivitySupport;
}
