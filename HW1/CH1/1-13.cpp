#include<iostream>
using namespace std;

int main()
{
	cout<<"How many milligrams of caffeine in the drink?";
	int caff;
	cin>>caff;
	cout<<"The number of drinks it will take to kill someone is "<<(double)10*1000/caff<<" drinks."<<endl;

}
