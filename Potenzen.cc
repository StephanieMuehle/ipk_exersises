#include <iostream>
#include <cmath>

namespace power {

double iterative(double q, int n)
{
	double e = 1;
	if (n%2 == 0)
	{
		for(int i = 0; i < (n/2); ++i)
		{
		e = q*q*e;
		}
	}
	else 
	{
		for(int i = 0; i < ((n-1)/2); ++i)
		{
		e = q*q*e;
		}
		e = q* e;
	}
	return e;
}

} //Schließe namespace
/*
int recursive(int q, int n)
{
	int e=1;
	 while(int i <= n)
	e = e*
}
*/

int main()
{
	int q = 0;
	std::cout << "Gib eine positive ganze Zahl ein " << std::flush;
	std::cin >> q;
	int n = 0;
	std::cout << "Gib eine positive ganze Zahl (die Potenz) ein " << std::flush;
	std::cin >> n;
	if (q > 0 && n > 0)
	{std::cout << q << " hoch " << n << " ist gleich " << power::iterative(q, n) << std::endl;
	}
	else
	{ std::cout << "Ungültige Eingabe" << std::endl;
	}
	return 0;
}
