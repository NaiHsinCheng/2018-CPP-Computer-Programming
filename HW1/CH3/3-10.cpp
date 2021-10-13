#include<iostream>
using namespace std;

int test(int m,int f,int g){
	if(g==0)
		return (m*13/12+f)/2;
	else
		return (f*12/13+m)/2;
}

int main()
{
	int gender,mhf,mhi,dhf,dhi,mom,dad,result_f,result_i;
	
	cout<<"Enter the gender of your future child. Use 1 for female, 0 for male."<<endl;
	cin>>gender;
	cout<<"Enter the height in feet and inches of the mom.\n";
	cout<<"feet:";
	cin>>mhf;
	cout<<"inches:";
	cin>>mhi;
	cout<<"Enter the height in feet and inches of the dad.\n";
        cout<<"feet:";
        cin>>dhf;
        cout<<"inches:";
        cin>>dhi;
	mom=mhf*12+mhi;
	dad=dhf*12+dhi;
	result_f=test(mom,dad,gender)/12;
	result_i=test(mom,dad,gender)%12;
	cout<<"Your future child is estimated to grow to "<<result_f<<" feet and "<<result_i<<" inches.\n";
}
