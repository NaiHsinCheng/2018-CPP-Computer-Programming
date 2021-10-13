#include<iostream>
using namespace std;

int main()
{
	float C=100,F;
	F=(9*C)/5+32;
	while(F!=C)
	{
		C--;
		F=(9*C)/5+32;
		
	}
	cout<<"The temperature is the same at "<<C<<endl;
}
