#include <iostream>
#include<conio.h>
using namespace std;
class Nos
{
		int no1,no2,no3;
	public:
		Nos();
		//Constructor inside definition
		Nos(int no1i,int no2i,int no3i)
		{
			no1=no1i;
			no2=no2i;
			no3=no3i;
		}
		void display()
		{
			cout<<"Outside constructor definition";
			cout<<"\nDetail of Numbers:\n";
			cout<<"Number 1: "<<no1;
		cout<<"\nNumber 2: "<<no2;
		
		}
		void display2()
		{
			cout<<"\n\n";
			cout<<"\nInside constructor definition";
			cout<<"\nDetail of Numbers:\n";
			cout<<"Number 1: "<<no1;
		cout<<"\nNumber 2: "<<no2;	
			cout<<"\nNumber 3: "<<no3;	
		}
};
//Constructor Outside definition
Nos::Nos()
{
	no1=5;
	no2=9;
}
int main() 
{
	Nos s1;
	Nos s2(3,9,12);
	s1.display();
	s2.display2();
	getch();
	return 0;
}
