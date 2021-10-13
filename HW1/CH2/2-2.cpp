#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int dep,count=1;
	float take,rate,interest=0,principal;
	cout<<"deposit: ";
	cin>>dep;
	principal=dep;
	cout<<"Rate: ";
	cin>>rate;
	cout<<"Fixed amount withdrawn every month: ";
	cin>>take;
	cout<<"months   interest\t principal\n";
	while(principal>take)
	{
		principal=principal-take;
		interest=principal*rate;
		principal+=interest;
		
		cout<<count<<"\t\t"<<fixed<<setprecision(2)<<interest<<"\t\t"<<principal<<endl;
		count++;
	}
	cout<<"number of payments = "<<count<<" last months interest = ";
	cout<<principal*rate<<" last payment = "<<principal+principal*rate<<endl;
}
