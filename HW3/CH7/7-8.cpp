#include<iostream>
#include<vector>
using namespace std;

int main(){
int c;
vector<int> v;
cout<<"Enter each grade and then -1 to stop.\n";
cin>>c;
while(c!=-1)
{
	v.push_back(c);
	cin>>c;
}

int max=0,index=0;
while(index<v.size())
{
	if (max<=v[index])
		max=v[index];
	index++;
}

index=0;
int array[max+1]={0};
while(index<v.size())
{
	for(int i=0;i<max+1;i++)
	{
		if(v[index]==i)
		{
			array[i]++;
			break;
		}
	}
	index++;
}

for(int i=0;i<max+1;i++)
{
	cout<<array[i]<<" grade(s) of "<<i<<endl;
}

}
