#include<iostream>
using namespace std;


class C{
      private:
		char array[100];
		int size;
      public:
		C();
		C(int sz);
		C(int sz,char v);
		int getSize();
		char& operator[](int index);
};

int main(){
	C c1;
	cout<<"Default output(10):";
	for(int i=0;i<10;i++)
	{
		cout<<c1[i]<<' ';
	}
	cout<<endl<<"Size: "<<c1.getSize()<<endl;
	cout<<"-----clear array-----"<<endl;
	
	int sz;
	cout<<"First sz member of the char array to #:";
	cin>>sz;
	C c2=C(sz,'#');
	for(int i=0;i<sz;i++)
	{
		cout<<c2[i]<<' ';
	}
	cout<<endl<<"Size: "<<c2.getSize()<<endl;
	cout<<"-----clear array-----"<<endl;

	char w;
	cout<<"First sz member of the char array to ?:";
	cin>>sz>>w;
	C c3=C(sz,w);
	for(int i=0;i<sz;i++)
	{
		cout<<c3[i]<<' ';
	}
	cout<<endl;
}

C::C(){
	size=10;
	for(int i=0;i<10;i++){
		array[i]='#';
	}
}
C::C(int sz){
	size=sz;
	for(int i=0;i<10;i++){
		array[i]='#';
	}
}
C::C(int sz,char v){
	size=sz;
	for(int i=0;i<sz;i++){
		array[i]=v;
	}
}
int C::getSize(){
	return size;
}
char& C::operator[](int index){
	return array[index];
}

