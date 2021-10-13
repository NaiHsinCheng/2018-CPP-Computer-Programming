#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
        cout<<"This program makes a rough estimate for squsre roots."<<endl;
	cout<<"Enter an integer to estimate the square root of: ";
	int number;
	cin>>number;
	double r,guess;
	guess=number/2;
   
	for(int i=0;i<5;i++)
	{
	        r=number/guess;
		guess=(guess+r)/2;	
	}

	cout<<"The estimated square root of "<<number<<" is "<<fixed<<setprecision(2)<< guess<<endl;


}


