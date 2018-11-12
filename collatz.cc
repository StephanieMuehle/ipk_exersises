#include <iostream>
#include <cmath>
using namespace std;

void collatz(int zahl)
{
	cout << zahl << endl;
	int zähler = 0; //um die anzahl der Versuche zu zählen
// Bedingungen an Endzahl prüfen
	while ((zahl != 1) && (zahl != 0) && (zahl != -1) && (zahl != -5) && (zahl != -17))
	{
		if (zahl%2 == 0) //zahl gerade
		{
			zahl = zahl/2;
			cout << zahl << endl;
		zähler++;
		}
		else //zahl ungerade
		{
			zahl = 3*zahl + 1;
			cout << zahl << endl;
		zähler++;
		}
	}
	cout << "Fertig. Die Endzahl ist " << zahl << " und wurde nach so vielen Durchgängen erreicht: " << zähler << endl;
}


int main()
{
	double a;
	cout <<"zahl = " << flush;
	cin >> a;
	 collatz(a);
	return 0;
}
