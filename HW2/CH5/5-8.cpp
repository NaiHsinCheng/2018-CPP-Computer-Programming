#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int people[50]={0},time=0;
	double rate[50]={0};
while(time<=5000)
{
	for(int i=0;i<50;i++)
	{
		int check;
		do{
			people[i]=(rand()%12+1)*100+(rand()%31+1);
			if(people[i]/100==4||people[i]/100==6||people[i]/100==9||people[i]/100==11)
			{
				if(people[i]%100>30)
					check=1;
				else
					check=0;
			}
			else if(people[i]/100==2)
			{
				if(people[i]%100>28)
					check=1;
				else
					check=0;
			}
			else
				check=0;
		}while(check);
	}
	for(int i=2;i<=50;i++)
	{
		int yes=0;
		for(int h=0;h<i;h++)
		{
			for(int j=0;j<h;j++)
			{			
				if(people[h]==people[j])
					yes=1;
			}	
					
		}
		if(yes==1)
			rate[i-1]++;
	}
time++;
}

for(int i=1;i<50;i++)
{
	cout<<"For "<<i+1<<" people, the probability of two birthdays is about "<<rate[i]/5000<<endl;

}

}
