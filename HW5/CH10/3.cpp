#include<iostream>
using namespace std;

int main()
{
	char input[80]={};
	cout<<"Enter a string less than 80 characters long."<<endl;
	cin.getline(input,80);
	char *head,*tail,*temp;
	head=&input[0];
	int index=0,num=0;

	for(int i=79;i>=0;i--)
	{
		if(input[i]=='\0')
			index=i;
	}
	tail=&input[index-1];
	temp=tail;

	cout<<"Your string reversed is : ";
	while(temp!=head-1)
	{
		cout<<*temp;
		temp--;
	}
	cout<<endl;
	
	cout<<"And your number of words is : ";
	while(temp!=tail)
	{
		if(*temp==' ')		
			num++;
		temp++;
	}
	cout<<num+1<<endl;
}
