#include<iostream>
#include<cstdlib>
using namespace std;

class Temperature{
  private:
	float F;
  public:
	float toK();
	float toC();
	friend const bool operator ==(const Temperature& t1,const Temperature& t2);
	friend ostream& operator <<(ostream& s,Temperature& t1);
	friend istream& operator >>(istream& s,Temperature& t1);
};



int main(){
	Temperature t1,t2;
	cout<<"Input a temperature1 in Fahrenheit."<<endl;
	cin>>t1;
	cout<<t1;
	cout<<endl<<"Input a temperaturel2 in Fahrenheit."<<endl;
	cin>>t2;
	cout<<t2<<endl;
	cout<<"temperature1 == temperature2 : "<< boolalpha <<(t1==t2)<<endl;
} 

float Temperature::toK(){
	return (F+459.67)*5/9;
}
float Temperature::toC(){
	return (F-32)*5/9;
}


const bool operator==(const Temperature& t1,const Temperature& t2){
	if(t1.F==t2.F)
		return true;
	else
		return false;
}
ostream& operator<<(ostream& s,Temperature& t1){
	s<<"In Kelvin: "<< t1.toK() <<endl;
	s<<"In Celisus: "<< t1.toC() <<endl;
	s<<"In Fahrenheit: "<< t1.F<<endl;
}

istream& operator >>(istream& s, Temperature& t) {
    s >> t.F;
}

