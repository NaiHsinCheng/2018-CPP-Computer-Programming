#include<iostream>
using namespace std;

int cost(int itemCode, int &voucherValue)
{
	int money;
	switch(itemCode){
		case 1:
			money=10;
			break;
		case 2:
			money=20;
			break;
		case 3:
			money=30;
			break;
		case 4:
			money=40;
			break;
		}

	voucherValue-=money;
	if(voucherValue<0)
	{
		cout<<"You don't have enough value of voucher to buy it.\n";
		return 1;
	}	
	cout<<"The price of item which you buy:"<<money<<endl;
	cout<<"You still have value of voucher:"<<voucherValue<<endl<<endl;
	if(voucherValue>=10)
	{	
		return 0;
	}
	else
	{
		cout<<"You don't have enough value of voucher to buy anything.\n";
		return 1;
	}
}


int main()
{
	cout<<"1.Bagel: 10\n"<<"2.Cake: 20\n"<<"3.Croissant: 30\n"<<"4.Toast: 40\n"<<"Input tour value of voucher:";
	int voucher,item,stop=0;
	cin>>voucher;
	while(!stop)
	{
		cout<<"Which item you want?";
		cin>>item;
		stop=cost(item, voucher);
	}	
}
