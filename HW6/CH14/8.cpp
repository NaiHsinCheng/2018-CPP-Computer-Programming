#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Viewer{
	public:
		void menu(){
		cout<<"Menu options:"<<endl;
		cout<<"0> Exit"<<endl;
		cout<<"1> Display all messages"<<endl;
		}
		void display(vector<string> v){
			cout<<"Message Posted:"<<endl;
			for(int i=1;i<=v.size();i++)
			{
				cout<<i<<". "<<v[i-1]<<endl;
			}
			cout<<endl;
		}
};

class Owner:public Viewer{
	public:
		vector<string> message;
		void menu(){
			cout<<"Menu options:"<<endl;
			cout<<"0> Exit"<<endl;
			cout<<"1> Display all messages"<<endl;
			cout<<"2> Post new message"<<endl;
			cout<<"3> Delete message"<<endl<<endl;
		}
		void display(){
			cout<<"Message Posted:"<<endl;
			for(int i=1;i<=message.size();i++)
			{
				cout<<i<<". "<<message[i-1]<<endl;
			}
			cout<<endl;
		}
		void post(){
			string s;
			cout<<"Enter new message"<<endl;
			cin>>s;
			message.push_back(s);
			cout<<"Message Posted."<<endl<<endl;
		}
		void del(){
			int i;
			cout<<"Which message do you want to delete?"<<endl;
			cin>>i;
			message.erase(message.begin()+i-1);
			cout<<"Deleted."<<endl<<endl;
		}
};

int main(){
	int c;
	Owner t1;
	Viewer t2;
	cout<<"First, enter data as the owner"<<endl<<endl;
	while(1){
		t1.menu();
		cout<<"Enter command."<<endl;
		cin>>c;

		if(c==0)
			break;
		else if(c==1)
			t1.display();
		else if(c==2)
			t1.post();
		else if(c==3)
			t1.del();
	}

	cout<<endl<<"Access data as viewer"<<endl<<endl;
	while(1){
		t2.menu();
		cout<<"Enter command."<<endl;
		cin>>c;

		if(c==0)
			break;
		else if(c==1)
			t2.display(t1.message);
	}
}
