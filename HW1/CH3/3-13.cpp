#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
	int a[4];
	srand(time(NULL));
	for(int i=0;i<4;i++)
	{
		do{
			a[i]=rand()%25+1;
			for(int j=0;j<i;j++)
			{
				if(a[i]==a[j])
				{
					a[i]=0;
					break;
				}
			}
		}while(a[i]==0);
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
