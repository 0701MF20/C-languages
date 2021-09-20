#include <iostream>
#include<conio.h>
using namespace std;
class Area
{
	double l1,l2,l3;
	public:
		//Constructor with no argument
		Area()
		{
		l1=5.2;
      	l2=9.2;	
		}
		//Constructor with two argument
		Area(double no1i,double no2i)
		{
			l1=no1i;
			l2=no2i;
		}
			//Constructor with one argument
		Area(double no1i)
		{
			l1=no1i;
			l2=5.5;
		}
		void Areadisplay()
		{
				l3=l1*l2;
			cout<<"\nArea of Rectangle: "<<l3;
		}
};
int main() 
{
Area a1;
Area a2(3.4,7.9);
Area a3(5.6);
a1.Areadisplay();
a2.Areadisplay();
a3.Areadisplay();
	getch();
	return 0;
}

