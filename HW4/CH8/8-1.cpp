#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;


class money{
      private:
	int dollars,cents;
	int dollarsPart(double amount) const;
	int centsPart(double amount) const;
	int round(double number) const;
      public:
	money();
	money(double amount);
	money (int theDollars, int theCents);
	money(int theDollars);
	double getAmount() const;
	int getDollars() const;
	int getCents() const;
	const money percent(int percentFigure) const{
		money p;
		double amount;
		amount=(dollars+cents*0.01)*percentFigure/100;
		p.dollars=dollarsPart(amount);
		p.cents=centsPart(amount);
		return p;
	}
	friend const money operator +(const money& amount1,const money& amounts);
	friend const money operator -(const money& amount1,const money& amounts);
	friend bool operator ==(const money& amount1,const money& amounts);
	friend bool operator <(const money& amount1,const money& amount2);
	friend bool operator <=(const money& amount1,const money& amount2);
	friend bool operator >=(const money& amount1,const money& amount2);
	friend bool operator >(const money& amount1,const money& amount2);
	friend const money operator -(const money& amount);
	friend ostream& operator <<(ostream& outputStream, const money& amount);
	friend istream& operator >>(istream& inputStream,money& amount){
		char dollarSign;
		inputStream>>dollarSign;
		if (dollarSign!='$')
		{
			cout<<"No dollar sign in Money input.\n";
			exit(1);
		}
	
		double amountAsDouble;
		inputStream>>amountAsDouble;
		amount.dollars=amount.dollarsPart(amountAsDouble);
		amount.cents=amount.centsPart(amountAsDouble);
		
		return inputStream;	
	}

};

int main(){
	money youramount, myamount(10,9);
	int yourpercent,mypercent=15;
	cout<< "Enter an amount of money: ";
	cin>> youramount;
	cout<<"Enter a percent you wish to take of your amount:";
	cin>>yourpercent;
	cout<<"Your amount is "<<youramount<<endl;
	cout<<"My amount is "<<myamount<<endl;
	cout<<yourpercent<<'%'<<" of your amount is $"<<youramount.percent(yourpercent)<<endl;
	cout<<mypercent<<'%'<<" of my amount is $"<<myamount.percent(mypercent)<<endl;

	if(youramount==myamount)
		cout<<"We have the same amount."<<endl;
	else
		cout<<"One if us is richer."<<endl;
	
	money ouramount=myamount+youramount;
	cout<< youramount << "+" << myamount<< " equals "<<ouramount<<endl;
	
	money diffamount=youramount-myamount;
	cout<< youramount << "-" << myamount<< " equals "<<diffamount<<endl;

	cout<<"Your amount is "<<youramount<<endl;
	cout<<"My amount is "<<myamount<<endl;

	if(youramount>=myamount)
		cout<<"Your amount is greater than or equal to my amount."<<endl;
	else
		cout<<"My amount is greater than your amount."<<endl;

	if((youramount+myamount)>(youramount-myamount))
		cout<<"The sum of our amounts is greater than the difference."<<endl;
	else
		cout<<"The difference of our amounts is greater than or equal to the sum."<<endl;

	if(youramount<=myamount)
		cout<<"My amount is greater than or equal to your amount"<<endl;
	else
		cout<<"Your amount is greater than my amount."<<endl;

	if((youramount+myamount)<(youramount-myamount))
		cout<<"We have the same amount."<<endl;
	else
		cout<<"The sum of our amounts is greater than or equal to the difference."<<endl;

}

money::money( ):dollars(0), cents(0) {}
money::money(double amount):dollars(dollarsPart(amount)),cents(centsPart(amount)) {}
money::money(int theDollars):dollars(theDollars),cents(0) {}
money::money(int theDollars,int theCents)
{
	if((theDollars<0 && theCents>0)||(theDollars>0 && theCents<0))
	{
		cout<<"Inconsistent money data.\n";
		exit(1);
	}
	dollars = theDollars;
	cents=theCents;
}

int money::dollarsPart(double amount) const
{
	return static_cast<int>(amount);
}

int money::centsPart(double amount) const
{
	double doubleCents=amount*100;
	int intCents=(round(fabs(doubleCents)))%100;
	if(amount<0)
		intCents=-intCents;
	return intCents;
}

int money::round(double number) const
{
	return static_cast<int>(floor(number+0.5));
}

double money::getAmount() const
{
	return (dollars+cents*0.01);
}

int money::getDollars() const
{
	return dollars;
}

int money::getCents() const
{
	return cents;
}

ostream& operator<<(ostream& outputStream,const money& amount)
{
	int absDollars=abs(amount.dollars);
	int absCents=abs(amount.cents);
	if(amount.dollars<0 || amount.cents<0)
		outputStream<<"$-";
	else
		outputStream<<"$";
	outputStream<<absDollars;

	if(absCents>=10)
		outputStream<< '.' << absCents;
	else
		outputStream<< '.' << '0' << absCents;
	
	return outputStream;
}



const money operator +(const money& amount1,const money& amount2)
{
	int allCents1=amount1.cents+amount1.dollars*100;
	int allCents2=amount2.cents+amount2.dollars*100;
	int sumAllCents=allCents1+allCents2;
	int absAllCents=abs(sumAllCents);
	int finalDollars=absAllCents/100;
	int finalCents=absAllCents%100;

	if(sumAllCents<0)
	{
		finalDollars=-finalDollars;
		finalCents=-finalCents;
	}
	return money(finalDollars,finalCents);
}

const money operator -(const money& amount1,const money& amount2)
{
	int allCents1=amount1.cents+amount1.dollars*100;
	int allCents2=amount2.cents+amount2.dollars*100;
	int diffAllCents=allCents1-allCents2;
	int absAllCents=abs(diffAllCents);
	int finalDollars=absAllCents/100;
	int finalCents=absAllCents%100;

	if(diffAllCents<0)
	{
		finalDollars=-finalDollars;
		finalCents=-finalCents;
	}
	return money(finalDollars,finalCents);	
}

bool operator ==(const money& amount1,const money& amount2)
{
	return ((amount1.dollars==amount2.dollars)&&(amount1.cents==amount2.cents));
}

const money operator-(const money& amount)
{
	return money(-amount.dollars,-amount.cents);
}

bool operator <(const money& amount1,const money& amount2)
{
	return (amount1.getAmount()<amount2.getAmount());
}

bool operator <=(const money& amount1,const money& amount2)
{
	return (amount1.getAmount()<=amount2.getAmount());
}

bool operator >=(const money& amount1,const money& amount2)
{
	return (amount1.getAmount()>=amount2.getAmount());
}

bool operator >(const money& amount1,const money& amount2)
{
	return (amount1.getAmount()>amount2.getAmount());
}

