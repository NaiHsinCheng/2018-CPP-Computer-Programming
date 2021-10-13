#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

const int SMALL = 0;
const int MEDIUM = 1;
const int LARGE = 2;

const int DEEPDISH = 0;
const int HANDTOSSED = 1;
const int PAN = 2;

class Pizza
{
  public:
     int getPepperoniToppings();
     void setPepperoniToppings(int numPepperoni);
     int getCheeseToppings();
     void setCheeseToppings(int numCheese);
     int getSize();
     void setSize(int newSize);
     int getType();
     void setType(int newType);
     void outputDescription();
     double computePrice();
  private:
     int size, type, pepperoniToppings, cheeseToppings;
};

class Order
{
  private:
    vector<Pizza> v;
  public:
     void outputDescription();
     double computePrice();
     void set(Pizza n);
};

int main()
{
Order c;
Pizza a,b;
a.setType(HANDTOSSED);
a.setSize(SMALL);
a.setPepperoniToppings(0);
a.setCheeseToppings(3);

b.setType(PAN);
b.setSize(LARGE);
b.setPepperoniToppings(2);
b.setCheeseToppings(1);

c.set(a);
c.set(b);
c.outputDescription();
cout<<"The total price is $"<<c.computePrice()<<endl;

}



int Pizza::getPepperoniToppings()
{
	return pepperoniToppings;
}

void Pizza::setPepperoniToppings(int numPepperoni)
{
	pepperoniToppings=numPepperoni;
}

int Pizza::getCheeseToppings()
{
	return cheeseToppings;
}
void Pizza::setCheeseToppings(int numCheese)
{
	cheeseToppings=numCheese;
}

int Pizza::getSize()
{
	return size;
}

void Pizza::setSize(int newSize)
{
	size=newSize;
}

int Pizza::getType()
{
	return type;
}

void Pizza::setType(int newType)
{
	type=newType;
}

void Pizza::outputDescription()
{
	string stype;
	if(getType()==0)
		stype="Deep dish";
	else if(getType()==1)
		stype="Hand tossed";
	else
		stype="Pan";

	string ssize;
	if(getSize()==0)
		ssize="Small";
	else if(getSize()==1)
		ssize="Medium";
	else
		ssize="Large";

	cout<<"This pizza is: "<<ssize<<", "<<stype<<", with "<<getPepperoniToppings()<<" pepperoni toppings and "<<getCheeseToppings()<<" cheese toppings."<<endl;
}
double Pizza::computePrice()
{
	if(size==0)
		return 10+2*(pepperoniToppings+cheeseToppings);
	else if(size==1)
		return 14+2*(pepperoniToppings+cheeseToppings);
	else
		return 17+2*(pepperoniToppings+cheeseToppings);
}


void Order::outputDescription()
{
	cout<<"There are "<<v.size()<<" pizzas in the order"<<endl;
	int i=0;
	while(i<v.size())
	{
		v[i].outputDescription();
		i++;
	}
}

double Order::computePrice()
{
	int i=0;
	double num=0;
	while(i<v.size())
	{
		num += v[i].computePrice();
		i++;
	}
}

void Order::set(Pizza n)
{
	v.push_back(n);	
}
