#include "trigonometry.hpp"

double mysin(double d)
{
	if(int(d)%180==0)
	{
		return 0;
	}
		else 
		{
			d *=M_PI / 180;
		}
	while(d>=2*M_PI)
	{
		d-=2*M_PI;
	}
	while(d<=2*M_PI)
	{
		d+=2*M_PI;
	}
	int p=10;
	double r=0;
	int t=0;
	for(int i = 0; i < p; ++i )
	{
		t=2*i+1;
		r+=pow(-1,i)*pow(d,t)/fact(t);
	}
	return r;
}
