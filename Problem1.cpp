#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Setting initial conditions
	double Lp = 0.5;
	double Ldel = -0.7;
	double p = 1;
	double delt = 0.01;
	double del02 = 1;
	double del2inf = 0;
	double t;

	// Roll rate equation
	
	for (t=0;t<5.01;t=t+delt)
	{
		if (t <= 2)
		{
			double del = del02;
			p = p + (Lp * p + Ldel * del) * delt;
			cout << "P= " << p << endl;
		}
		else if(t>2)
		{
			double del = del2inf;
			p = p + (Lp * p + Ldel * del) * delt;
			cout << "P = " << p << endl;
		}
	}
}