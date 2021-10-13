#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

int main()
{
	cout<<left<<setw(8)<<"Code"<<"Flavor\n";
	cout<<left<<setw(8)<<"1"<<"Chocolate\n";
	cout<<left<<setw(8)<<"2"<<"Vanilla\n";
	cout<<left<<setw(8)<<"3"<<"Strawberry\n";
	cout<<left<<setw(8)<<"4"<<"Raspberry\n";
	cout<<left<<setw(8)<<"5"<<"Butterscotch\n";
	int item[5]={20,15,15,20,20},n,cart[5]={0};
	string choice,charname[5]={"Chocolate","Vanilla","Strawberry","Raspberry","Butterscotch"};
	char contin;
	do{
		cout<<"The products remain in the stock\n";
		for(int i=0;i<5;i++)
		{
			cout<<left<<setw(8)<<i+1<<item[i]<<endl;
		}
		cout<<"Choice you like:";
		cin>>choice>>n;
		if(choice==charname[0])
		{
				if(item[0]-n>=0)
				{
					item[0]-=n;
					cart[0]+=n;
				}
				else
					cout<<"The Chocolate is not enough.\n";
		}
		else if(choice==charname[1])
		{
				if(item[1]-n>=0)
				{
					item[1]-=n;
					cart[1]+=n;
				}
				else
					cout<<"The Vanilla is not enough.\n";
		}
		else if(choice==charname[2])
		{
				if(item[2]-n>=0)
				{
					item[2]-=n;
					cart[2]+=n;
				}
				else
					cout<<"The Strawberry is not enough.\n";
		}
		else if(choice==charname[3])
		{
				if(item[3]-n>=0)
				{
					item[3]-=n;
					cart[3]+=n;
				}
				else
					cout<<"The Raspberry is not enough.\n";
		}
		else if(choice==charname[4])
		{
				if(item[4]-n>=0)
				{
					item[4]-=n;
					cart[4]+=n;
				}
				else
					cout<<"The Butterscotch is not enough.\n";
		}
		cout<<"Continue Choice?(Y/N)";
		cin>>contin;
	}while(contin=='Y');
	cout<<"The user's cart\n";
	for(int i=0;i<5;i++)
	{
		if(cart[i]!=0)
			cout<<"        "<<left<<setw(16)<<charname[i]<<cart[i]<<endl;
	}
	
}
