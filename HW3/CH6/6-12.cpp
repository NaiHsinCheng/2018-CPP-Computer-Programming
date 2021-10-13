#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>
using namespace std;

class BoxOfProduce{
public:
string thing[3];
void accessor(int i,string j); //get
void mutator(int i,string j);  //set
void output();
};

int main(){
BoxOfProduce a;
string txt[5];
int i=0;
int select[3];
fstream inputsel;
char in;
int index;
string change;

inputsel.open("produce.txt");
while(inputsel>>txt[i])
{
	i++;
}
inputsel.close();

for(int i=0;i<3;i++)
{
	select[i]=rand()%6;
	a.accessor(i,txt[select[i]]);
}

a.output();
cout<<"Enter 'c' to change a bumdle."<<endl;
cout<<"Enter 'q' to quit."<<endl;
cin>>in;
while(in=='c'){
cout<<"Enter index of item to change."<<endl;
cin>>index;
cout<<"Enter item to substitute."<<endl;
cin>>change;
a.mutator(index-1,change);
a.output();
cout<<"Enter 'c' to change a bumdle."<<endl;
cout<<"Enter 'q' to quit."<<endl;
cin>>in;
}
cout<<"Final Contents:"<<endl;
a.output();

}

void BoxOfProduce::accessor(int i,string j){
thing[i]=j;
}
void BoxOfProduce::mutator(int i,string j){
thing[i]=j;
}

void BoxOfProduce::output(){
cout<<"The box contains:  (1)"<<thing[0]<<" (2)"<<thing[1]<<" (3)"<<thing[2]<<endl;
}
