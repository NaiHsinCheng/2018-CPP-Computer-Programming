#include<iostream>
using namespace std;

float hat(float w,float h){
	return w/h*2.9;
}

float jacket(float h,float w,int a){
	if(a<=30)
		return h*w/288;
	else
		return h*w/288+(a-30)/10/8;
}

float waist(float w,int a){
	if(a<=28)
		return w/5.7;
	else
		return w/5.7+(a-28)/2/10;
}
int main()
{
	float height,weight;
	int age;
	char agai;
	do{
	cout<<"Give me your height in inches, weight in pounds, and age in years and I will give you your hat size, jacket size(inches at chest) and your waist size in inches.\n";
	cout<<"height:";
	cin>>height;
	cout<<"weight:";
	cin>>weight;
	cout<<"age:";
	cin>>age;
	cout<<"Your hat size = "<<hat(weight,height) <<endl;
	cout<<"Your jacket size = "<<jacket(height,weight,age) <<endl;
	cout<<"Your waist size = "<<waist(weight,age) <<endl;
	
	cout<<"enter Y or y to repeat this calculation, any other character ends.";
	cin>>agai;
	}while(agai=='Y'||agai=='y');

}
