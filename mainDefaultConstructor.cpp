	#include <iostream>
#include<conio.h>
using namespace std;
class Nos
{
		int no1,no2,no3;
	public:
	Nos()
{
	no1=5;
	no2=9;
}
		void display()
		{
			cout<<"\nDetail of Numbers:\n";
			cout<<"Number 1: "<<no1;
		cout<<"\nNumber 2: "<<no2;
		
		}
};

int main() 
{
	Nos s1;
	s1.display();
	getch();
	return 0;
}

