#include <iostream>
#include <cmath>
using namespace std;

int main()
{
//einlesen der Variablen
	double a;
	cout << "a = " << flush;
	cin >>  a;
	double b;
	cout << "b = " << flush;
	cin >> b;
	double c;
	cout << "c =" << flush;
	cin >> c;
//wenn a = 0 keine qG --> Warnen
	if ( a == 0)
	{
		cout << "Das ist keine quadratische Gleichung" << endl;
		if (b == 0)
		{
		cout << "Sie hat auch keine Nullstelle, gib was anderes ein." << endl;
		}
		else
		{ 
		double L1 = -c/b;
		cout << "Die Nullstelle ist " << L1 << endl;
		} 
	}
//sonst: ausrechen (achte auf: was  wenn die Determinante negativ ist?
	else
	{
		double d = b*b - 4*a*c;
		if (d < 0) // keine Lösung für Determinante kleiner null
		{
			cout << "Die Gleichung hat keine Lösung" << endl;
		}
		if (d == 0) //Eine Lösung für Det = 0, diese ausgeben
		{
			double L1 = -b/(2*a);
			cout << "Die Lösung deiner Gleichung ist " << L1 << endl;
		}
		if (d > 0) //Zwei Lösungen für Det größer null, diese ausgeben
		{
			double L1;
			L1 = (-b + std::sqrt(d)) /(2*a);
			double L2;
			L2 = (-b - std::sqrt(d))/(2*a);
			cout << "Die Lösungen sind " << L1 << " und " << L2 << endl;
		}
	}
	return 0;
}

	
