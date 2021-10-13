#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int r[4][6]={3,1,5,2,1,5,	4,2,1,4,2,4,	3,1,2,4,4,1,	5,1,4,2,4,2};
	int inputmovie[3],inputrate[3];
	int num[4]={0};
	for(int i=0;i<3;i++)
	{
		cout<<"Enter a movie to rate (100-105).\n";
		cin>>inputmovie[i];
		cout<<"Enter rating (1-5) for this movie.\n";
		cin>>inputrate[i];
	}
	
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
			num[i]+=pow(r[i][(inputmovie[j]-100)]-inputrate[j],2);
		}
	}
	
	for(int i=0;i<4;i++)
	{
		num[i]=pow(num[i],1/2);
	}
	int min=0;
	for(int i=1;i<4;i++)
	{
		if(num[min]>num[i])
			min=i;
	}
	cout<<"The closest reviewer is number "<<min<<endl;
	cout<<"Predictions for movies you have not yet seen:\n";
	for(int j=0;j<6;j++)
	{	
		if(j!=(inputmovie[0]-100)&&j!=(inputmovie[1]-100)&&j!=(inputmovie[2]-100))
			cout<<"Movie "<<100+j<<" :Predicted Rating = "<<r[min][j]<<endl;
		
	}

}
