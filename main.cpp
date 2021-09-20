/*
#include <iostream>
using namespace std;
int main()
{
    cout<<"Hello World";

    return 0;
}
*/
/*
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[3][3],b[3][3],c[3][3];
	cout<<"Matrix 1:-\n";
	for(int i=0;i<3;i++)
	{
		cout<<"Enter the data in row "<<i+1<<":-"<<endl;
		for(int j=0;j<3;j++)
		{
		cin>>a[i][j];
		}
	}
	cout<<"Printing the matrix:-"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<a[i][j];
			cout<<" ";
		}
		cout<<endl;
	}
	cout<<"Matrix 2:-\n";
		for(int i=0;i<3;i++)
	{
		cout<<"Enter the data in row "<<i+1<<":-"<<endl;
		for(int j=0;j<3;j++)
		{
		cin>>b[i][j];
		}
	}
	cout<<"Printing the matrix :-"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<b[i][j];
			cout<<" ";
		}
		cout<<endl;
	}
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
c[i][j]=0;
for(int k=0;k<3;k++)
{
c[i][j]+=a[i][k]*b[k][j];
}
}
}
//for printing result
cout<<"Multiplication of two matrix result:-\n";
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
cout<<c[i][j]<<" ";
}
cout<<"\n";
}

	return 0;
	getch();
}
*/
/*
#include <iostream>
#include<conio.h>
using namespace std;
int main() 
{
	int *xp,*yp,x1,y1,mult,new_x,new_y;
	cout<<"Enter the number 1: ";
	cin>>x1;
	cout<<"Enter the number 2: ";
	cin>>y1;
	xp=&x1;
	yp=&y1;
	new_x=*xp;
	new_y=*yp;
	mult=new_x*new_y;
	cout<<"Product of two nos: "<<mult;
    getch();
	return 0;
}

*/
