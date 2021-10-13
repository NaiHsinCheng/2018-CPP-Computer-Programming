#include<iostream>
using namespace std;

float f(float rate_f,float time_f)
{
	return rate_f*60/8000*time_f;
}
int main()
{
	float rate,time;
	cout<<"Bit rate:";
	cin>>rate;
	cout<<"The duration in minutrs of a video clip:";
	cin>>time;
	cout<<"The file size of the video clip in megabytes:"<<f(rate,time)<<endl;
	
}
