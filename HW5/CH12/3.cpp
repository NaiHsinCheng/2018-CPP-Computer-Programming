#include<iostream>
#include<string>
#include<fstream>
#include<vector>
using namespace std;

int main()
{
	ifstream inStream;
	ofstream outStream;
	string name;

	cout<<"Enter a file name:";
	cin>>name;
	inStream.open(name);

	vector<int> v;
	int data;
	int num=0;
	int temp;	
	while(inStream>>data)
	{
		v.push_back(data);
	}
	
	for(int i=0;i<v.size();i++)
	{
		for(int j=i+1;j<v.size();j++)
		{
			if(v[i]>v[j])
			{
				temp=v[i];
				v[i]=v[j];
				v[j]=temp;

			}
		}
	}
	
	if(v.size()%2==0)
		cout<<"Median number : "<<(v.size()+1)/2<<" , value : "<<(float)(v[(v.size()-1)/2]+v[(v.size()-1)/2+1])/2<<endl;
	else
		cout<<"Median number : "<<(v.size()+1)/2<<" , value : "<<(float)v[(v.size()+1)/2-1]<<endl;

	if((v.size()+1)%4==0)
	{
		cout<<"Quartile: ";
		for(int i=1;i<=3;i++)
		{
			cout<<(float)v[i*((v.size()+1)/4)-1]<<' ';
		}
		cout<<endl;
	}
	else if((v.size()+1)%2==0 && (v.size()+1)%4!=0)
	{
		cout<<"Quartile: ";
		cout<<(float)(v[((v.size()+1)/2-1)/2]+v[((v.size()+1)/2-1)/2-1])/2<<' ';
		cout<<v[(v.size()+1)/2-1]<<' ';
		cout<<(float)(v[(v.size()+1)/2-1+((v.size()+1)/2-1)/2]+v[(v.size()+1)/2-1+((v.size()+1)/2-1)/2+1])/2<<' ';
		cout<<endl;
	}
	else
	{
		cout<<"Quartile: ";
		cout<<v[v.size()/3-1]<<' ';
		cout<<(float)(v[(v.size()-1)/2]+v[(v.size()-1)/2+1])/2<<' ';
		cout<<v[(v.size()-1)/2+v.size()/3]<<' ';
		cout<<endl;
	}
}
