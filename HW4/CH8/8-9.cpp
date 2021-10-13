#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>
#include<vector>
using namespace std;

class BoxOfProduce{
	private:
		vector<string> v;
	public:
		BoxOfProduce() {};
		vector<string> accessor(); //get
		void mutator(string j);  //set
		void output();
		friend const BoxOfProduce operator+(BoxOfProduce& b1,BoxOfProduce& b2);
};

int main(){
	BoxOfProduce a,b,c;
	string z="Kiwi";
	a.mutator(z);
	a.mutator("Kale");
	b.mutator("Tomato");
	b.mutator("Kiwi");
	b.mutator("Tomato");
	b.mutator("Timatillo");
	a.output();
	b.output();
	c=a+b;
	c.output();

}
const BoxOfProduce operator+(BoxOfProduce& b1,BoxOfProduce& b2){
	BoxOfProduce n;
	for(int i=0;i<b1.v.size();i++)
	{
		n.v.push_back(b1.v[i]);
	}
	for(int i=0;i<b2.v.size();i++)
	{
		n.v.push_back(b2.v[i]);
	}
	return n;
}

vector<string> BoxOfProduce::accessor(){
	return v;
}
void BoxOfProduce::mutator(string j){
	v.push_back(j);
}

void BoxOfProduce::output(){
	cout<<"The box contains: ";
	for(int i=0;i<v.size();i++)
	{
		cout<<" ("<<i+1<<")"<<v[i];
	}
	cout<<endl;
}
