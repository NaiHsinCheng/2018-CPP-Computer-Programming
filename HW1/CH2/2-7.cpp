#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	cout<<"Input the number of subjects: ";
	int n,cc=0;
	char grade;
	cin>>n;
	float count=0;
	for(int i=0;i<n;i++)
	{
		cout<<"Score received for subjects "<<i+1<<" :";
		cin >>grade;
		switch(grade){
		case 's':
		case 'S':
			count+=10;
			break;
		case 'a':
		case 'A':
			count+=9;
			break;
		case 'b':
		case 'B':
                        count+=8;
                        break;
		case 'c':
		case 'C':
                        count+=7;
                        break;
		case 'd':
		case 'D':
                        count+=6;
                        break;
		case 'e':
		case 'E':
                        count+=5;
                        break;
		case 'f':
		case 'F':
                        count+=0;
                        break;
		default:
			cout<<"error.\n";
			i=n;
			cc=1;
			break;}
	}
	if(cc==0)
	cout<<"The average of the grade points "<<fixed<<setprecision(2)<<count/n<<endl;



}
