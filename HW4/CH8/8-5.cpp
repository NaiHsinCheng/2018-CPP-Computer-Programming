#include<iostream>
using namespace std;


class Vector2D{
      private:
		int x;
		int y;
      public:
		int getx();
		int gety();
		void set(int a,int b);
		friend const int operator*(const Vector2D& v1,const Vector2D& v2);
};

int main(){
	Vector2D a1,a2,b1,b2,c1,c2;
	a1.set(9,10);
	a2.set(17,0);
	b1.set(10,12);
	b2.set(0,8);
	c1.set(19,13);
	c2.set(7,20);
	cout<<"(9,10)*(17,0)="<< a1*a2 <<endl;
	cout<<"(10,12)*(0,8)="<< b1*b2 <<endl;
	cout<<"(19,13)*(7,20)="<< c1*c2 <<endl;
}

int Vector2D::getx(){
	return x;
}
int Vector2D::gety(){
	return y;
}
void Vector2D::set(int a,int b){
	x=a;
	y=b;
}
const int operator*(const Vector2D& v1,const Vector2D& v2){
	return v1.x*v2.x+v1.y*v2.y;
}
