#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	cout<<"請輸入您總共行駛了幾公里：";
	float km;
	cin>>km;
	cout<<"請輸入您總共行駛了幾分鐘：";
        float time;
        cin>>time;
	float count=0;
	if(km<=2)
		count=2;
	else if(km<=8)
		count=2+(km-2)*0.5;
	else
		count=2+6*0.5+(km-8)*1;
	count+=0.2*time;
	cout<<"總共收取"<<fixed<<setprecision(2)<<count<<"元\n";

		

}

