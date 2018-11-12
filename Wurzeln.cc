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

double root_iterative(double q, int n, int steps)
{
	double e = 1;
	for (int i = 0; i < steps; ++i)
	{
		e = e * (1/n)*((q/ power::iterative(e, n-1)) - e);
	}
	return e;
}

int main()
{	
	int  n, steps;
	double q;
	std::cout << "Gib in dieser Reihenfolge q, n und steps ein: ";
	std::cin >> q;
	std::cin >> n;
	std::cin >> steps;
	std::cout << q << " hoch " << n << " ist in Näherung mit " << steps << " Schritten ist gleich " << root_iterative(q, n, steps) << std::endl;
	return 0;
}
