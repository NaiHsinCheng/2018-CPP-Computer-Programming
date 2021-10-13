#include<iostream>
#include<vector>
using namespace std;

int main(){

int n;
int index=2;
vector<int> v;
cout<<"Enter the number of suitors"<<endl;
cin>>n;
for(int i=0;i<n;i++)
{
	v.push_back(i+1);
}
while(v.size()>1)
{
	if (index>=v.size())
	{
		index-=(index/v.size())*v.size();
	}

	v.erase(v.begin()+index);
	index+=2;
}
cout<<"To win the princess, you should stand in position "<< v[0]<<endl;

}
