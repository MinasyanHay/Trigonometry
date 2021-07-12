#include <iostream>
#include "trigonometry.hpp"

using namespace std;

int main()
{
	double degree=0;
	string sc="";
	cout<<"Input your degree:  ";
	cin>>degree;
	cout<<"What function do you want?  /n";
	cout<<"Input <sin> : <cos> : <tan> : <ctan> :  "; cin>>sc;
	if(sc=="sin")
	{
		cout<<"sin("<<degree<<") ="<<mysin(degree)<<endl;
	}
	else if(sc=="cos")
	{
		cout<<"cos("<<degree<<") ="<<mycos(degree)<<endl;

	}
	else if(sc=="tan")
	{
		cout<<"tan("<<degree<<") ="<<mytan(degree)<<endl;

	}
	else if(sc=="ctan")
	{
		cout<<"ctan("<<degree<<") ="<<myctan(degree)<<endl;

	}

	return 0;
}
