#include<iostream>
using namespace std;

class TwoD
{
	private:
		double** array;
		int MaxRows;
		int MaxCols;
	public:
		TwoD(){}
		TwoD(int r, int c);
		TwoD(const TwoD &object);
		void input();
		int getMaxRows()const{return MaxRows;}
		int getMaxCols()const{return MaxCols;}
		void output();
		void operator =(TwoD s2);
		friend TwoD operator +(const TwoD& s1,const TwoD& s2);
		~TwoD();
};

int main()
{
	TwoD s1,s2,s3,s4;
	s1.input();
	cout<<"Enchoing the 2 dim. array, matrix1"<<endl;
	s1.output();
	s2.input();
	cout<<"Enchoing the 2 dim. array, matrix2"<<endl;
	s2.output();
	cout<<"assigning matrix 2 to matrix 3"<<endl;
	cout<<"Displaying the 2 dim array, matrix3 resulting from assignment"<<endl;
	s3=s2;
	cout<<"Rows "<<s3.getMaxRows()<<" Cols "<<s3.getMaxCols()<<endl;
	s3.output();
	cout<<"Displaying the 2 dim array, sum of matrix 1 and 2"<<endl;
	s4=s1+s2;
	cout<<"Rows "<<s4.getMaxRows()<<" Cols "<<s4.getMaxCols()<<endl;
	s4.output();
}

TwoD::TwoD(int r,int c){
	MaxRows=r;
	MaxCols=c;
	array=new double*[MaxRows];
	for(int i=0;i<MaxRows;i++)
	{
		array[i]=new double[MaxCols];
	}
}

TwoD::TwoD(const TwoD &object)
{
	MaxRows=object.getMaxRows();
	MaxCols=object.getMaxCols();
	array=new double*[MaxRows];
	for(int i=0;i<MaxRows;i++)
	{
		array[i]=new double[MaxCols];
	}
	for(int i = 0;i < MaxRows;i++)
	{
		for(int j = 0;j < MaxCols;j++)
		{
			array[i][j] = object.array[i][j];
		}
	}
}

void TwoD::input()
{
	cout << "Enter the row and column dimensions of the array\n";
	cin>>MaxRows;
	cin>>MaxCols;
	array=new double*[MaxRows];
	for(int i=0;i<MaxRows;i++)
	{
		array[i]=new double[MaxCols];
	}
		
	cout << "Enter " << MaxRows << " rows of " << MaxCols << " doubles each\n";
	for(int i = 0;i < MaxRows;i++)
	{
		for(int j = 0;j < MaxCols;j++)
		{
			cin >> array[i][j];
		}
	}
}

void TwoD::output()
{
	for(int i = 0;i < MaxRows;i++)
	{
		for(int j = 0;j < MaxCols;j++)
		{
			cout << (int)array[i][j] << " ";
		}
		cout << endl;
	}
}

void TwoD::operator =(TwoD s2){
	MaxRows=s2.MaxRows;
	MaxCols=s2.MaxCols;
	array=new double*[s2.MaxRows];
	for(int i=0;i<s2.MaxRows;i++)
	{
		array[i]=new double[s2.MaxCols];
	}
	for(int i=0;i<MaxRows;i++)
	{
		for(int j=0;j<MaxCols;j++)
		{
			array[i][j]=s2.array[i][j];
		}
	}
}

TwoD operator +(const TwoD& s1,const TwoD& s2){
	if(s1.MaxRows==s2.MaxRows && s1.MaxCols==s2.MaxCols)
	{
		TwoD temp(s1.MaxRows,s1.MaxCols);
		for(int i=0;i<s1.MaxRows;i++)
		{
			for(int j=0;j<s1.MaxCols;j++)
			{
				temp.array[i][j]=s1.array[i][j]+s2.array[i][j];
			}
		}
		return temp;
		
	}
	else
	{
		cout<<"Their sizes aren't same"<<endl;
		TwoD fail;
		return fail;
	}
}

TwoD::~TwoD()
{
	delete [] array;
}

