#include<iostream>
using namespace std;

void print(double kilograms,double pounds, double ouncess);

class Weight{
public:
void setWeightPounds(double p);
void setWeightKilograms(double p);
void setWeightOunces(double p);
double rek();
double reo();
double rep();
private:
double wei;
double kilograms;
double pounds;
double ouncess;
};

int main(){
Weight w;

w.setWeightKilograms(60);
print(w.rek(),w.rep(), w.reo());

w.setWeightPounds(110);
print(w.rek(),w.rep(), w.reo());

w.setWeightOunces(1800);
print(w.rek(),w.rep(), w.reo());

}
void Weight::setWeightPounds(double p){
wei=p;
cout<<"Set Pounds="<<wei<<endl;
}
void Weight::setWeightKilograms(double p){
wei=p;
cout<<"Set Kilograms="<<wei<<endl;
wei*=2.21;
}
void Weight::setWeightOunces(double p){
wei=p;
cout<<"Set Ounces="<<wei<<endl;
wei/=16;
}

double Weight::rek(){
kilograms=wei/2.21;
return kilograms;
}
double Weight::rep(){
pounds=wei;
return pounds;
}
double Weight::reo(){
ouncess=wei*16;
return ouncess;
}

void print(double kilograms,double pounds, double ouncess){
cout<<"> In Kilograms:"<<kilograms<<endl;
cout<<"> In Pounds:"<<pounds<<endl;
cout<<"> In Ounces:"<<ouncess<<endl<<endl;
}
