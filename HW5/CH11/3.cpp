#include<iostream>
#include<vector>


class RainbowColor{
      private:
	int colornumber;
	char colorname;

      public:
	RainbowColor(char p):colorname(p){}
	RainbowColor(int p):colornumber(p){}
	RainbowColor(){}
	void getRainbowColorByName(char p){
		colorname=p;
		switch(colorname){
			case 'R':
				colornumber=1;
				break;
			case 'O':
				colornumber=2;
				break;
			case 'Y':
				colornumber=3;
				break;
			case 'G':
				colornumber=4;
				break;
			case 'B':
				colornumber=5;
				break;
			case 'I':
				colornumber=6;
				break;
			case 'P':
				colornumber=7;
				break;
			default:
				std::cout<<colorname<<" is not a RainbowColor. Exiting\n";
		}
	}
	void outputcolornumber(){
		switch(colorname){
			case 'R':
				colornumber=1;
				break;
			case 'O':
				colornumber=2;
				break;
			case 'Y':
				colornumber=3;
				break;
			case 'G':
				colornumber=4;
				break;
			case 'B':
				colornumber=5;
				break;
			case 'I':
				colornumber=6;
				break;
			case 'P':
				colornumber=7;
				break;
		}
		std::cout<<colornumber<<' '<<colorname<<std::endl;
	}
	void outputcolorname(){
		switch(colornumber){
			case 1:
				colorname='R';
				break;
			case 2:
				colorname='O';
				break;
			case 3:
				colorname='Y';
				break;
			case 4:
				colorname='G';
				break;
			case 5:
				colorname='B';
				break;
			case 6:
				colorname='I';
				break;
			case 7:
				colorname='P';
				break;
		}
		std::cout<<colornumber<<' '<<colorname<<std::endl;
	}
	int nextcolor(){
		if(colornumber==7)
			colornumber=1;
		else
			colornumber+=1;
	}
	int test(int p){
		if(p==1||p==2||p==3||p==4||p==5||p==6||p==7)
			return 1;
		else
			return -1;
	}
	int test(char p){
		if(p=='R'||p=='O'||p=='Y'||p=='G'||p=='B'||p=='I'||p=='P')
			return 1;
		else
			return -1;
	}

};

int main(){
	RainbowColor test,test2;
	int tes;
	char input;

	std::cout<<"Testing constructor RainbowColor(char)"<<std::endl;
	RainbowColor a('R'),b('O'),c('Y'),d('G'),e('B'),f('I'),g('P');
	a.outputcolornumber();b.outputcolornumber();c.outputcolornumber();d.outputcolornumber();
	e.outputcolornumber();f.outputcolornumber();g.outputcolornumber();
	std::cout<<std::endl;

	std::cout<<"Testing RainbowColor(int) constructor"<<std::endl;
	RainbowColor a2(1),b2(2),c2(3),d2(4),e2(5),f2(6),g2(7);
	a2.outputcolorname();b2.outputcolorname();c2.outputcolorname();d2.outputcolorname();
	e2.outputcolorname();f2.outputcolorname();g2.outputcolorname();

	do{
		std::cout<<"Testing the getRainbowColorByName and outputRainbowColor"<<std::endl;
		std::cin>>input;
		tes=test.test(input);
		test.getRainbowColorByName(input);
		if(tes==1)
		{
			test.outputcolornumber();
			std::cout<<std::endl;
		}
	}while(tes==1);
	std::cout<<"\nend of loops\n";

	do{
		std::cout<<"Testing nextRainbowColor member"<<std::endl;
		std::cin>>input;
		test2.getRainbowColorByName(input);
		tes=test2.test(input);
		if(tes==1)
		{
			std::cout<<"The current RainbowColor: ";
			test2.outputcolornumber();
			test2.nextcolor();
			std::cout<<"\nThe next RainbowColor: ";
			test2.outputcolorname();
			std::cout<<std::endl;
		}
	}while(tes==1);
	std::cout<<"\nend of loops\n";
}

