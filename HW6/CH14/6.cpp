#include<iostream>
#include<string>
using namespace std;

class Payment{
	protected:
		float amount;
	public:
		Payment(){}
		Payment(float a):amount(a){}
		void paymentDetails(){cout<<"The payment amount is "<<amount<<endl<<endl;}
};

class CashPayment: public Payment{
	public:
		CashPayment(){}
		CashPayment(float a):Payment(a){}
		void paymentDetails(){cout<<"The cash payment amount is "<<amount<<endl<<endl;}
};

class CreditCardPayment:public Payment{
	private:
		string name;
		string date;
		string number;
	public:
		CreditCardPayment(){}
		CreditCardPayment(string n,string d,string num,float a):
				name(n),date(d),number(num),Payment(a){}
		void paymentDetails(){
			cout<<"The credit payment amount is "<<amount<<endl;
			cout<<"The name on the credit card is: "<<name<<endl;
			cout<<"The expiration date is: "<<date<<endl;
			cout<<"The credit card number is: "<<number<<endl<<endl;
		}
};

int main()
{
	CashPayment t1(50.5),t2(20.45);
	CreditCardPayment t3("Fred","10/5/2010","123456789",10.5),t4("Barney","11/15/2009","987654321",100);
	cout<<"Cash 1 details:"<<endl;
	t1.paymentDetails();
	cout<<"Cash 2 details:"<<endl;
	t2.paymentDetails();
	cout<<"Credit 1 details:"<<endl;
	t3.paymentDetails();
	cout<<"Credit 2 details:"<<endl;
	t4.paymentDetails();
}
