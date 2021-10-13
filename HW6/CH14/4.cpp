#include<iostream>
#include<string>
using namespace std;

class UniversityStaff{
	public:
		UniversityStaff(){}
		UniversityStaff(string theName):name(theName){}
		UniversityStaff(const UniversityStaff& theObject):name(theObject.getname()){}
		UniversityStaff operator=(UniversityStaff rtSide){ name=rtSide.name; return *this;}
		string getname() const{return name;}
		friend istream& operator>>(istream& inStream, UniversityStaff& staffObject);
		friend ostream& operator<<(ostream& outStream, const UniversityStaff& staffObject);
	private:
		string name;
};

class Student{
	protected:
		string Uname;
		string Rnumber;
		UniversityStaff proctor;
	public:
		Student() {}
		Student(string U,string R,UniversityStaff p):Uname(U),Rnumber(R),proctor(p){}
		Student(const Student& theObject):
	 		   Uname(theObject.getUname()),Rnumber(theObject.getRnumber())
							,proctor(theObject.getproctor()){}
		string getUname() const{return Uname;}
		string getRnumber() const{return Rnumber;}
		UniversityStaff getproctor() const{return proctor;}
		void output(){cout<<proctor.getname()<<endl<<Rnumber<<endl<<Uname<<endl<<endl;}
		Student& operator=(Student& rtSide){
			Uname=rtSide.Uname;
			Rnumber=rtSide.Rnumber;
			proctor=rtSide.proctor;
		}
};

class ScienceStudent: public Student{
	private:
		string discipline;
		string course;
	public:
		ScienceStudent(){}
		ScienceStudent(string d,string c,string U,string R,UniversityStaff p):
						discipline(d),course(c),Student(U,R,p){}
		ScienceStudent(const ScienceStudent& theObject):
						discipline(theObject.getdiscipline())
						,course(theObject.getcourse())
						{Uname=theObject.getUname();
						 Rnumber=theObject.getRnumber();
						 proctor=theObject.getproctor();}
		string getdiscipline() const{return discipline;}
		string getcourse() const{return course;}
		void output(){  cout<<proctor.getname()<<endl<<Rnumber<<endl<<Uname<<endl
				<<discipline<<endl<<course<<endl<<endl;  }
		ScienceStudent& operator=(ScienceStudent& rtSide){
			Uname=rtSide.Uname;
			Rnumber=rtSide.Rnumber;
			proctor=rtSide.proctor;
			discipline=rtSide.discipline;
			course=rtSide.course;
		}
};

int main(){
	UniversityStaff p1("NSYSU"),p2("NTU");

	Student t1("John","B123012345",p1),t2;

	cout<<"Student Test1(constructed) Data:"<<endl;
	t1.output();

	t2=t1;
	cout<<"Student Test2(assigned) Data:"<<endl;
	t2.output();
	
	Student t3(t2);
	cout<<"Student Test2(copy constructed) Data:"<<endl;
	t3.output();

	ScienceStudent T1("Math","undergraduate","Curry","C222012345",p2),T2;

	cout<<"ScienceStudent Test1(constructed) Data:"<<endl;
	T1.output();

	T2=T1;
	cout<<"ScienceStudent Test2(assigned) Data:"<<endl;
	T2.output();

	ScienceStudent T3(T2);
	cout<<"ScienceStudent Test2(copy constructed) Data:"<<endl;
	T3.output();
}
