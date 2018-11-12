#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int N;
	cout << "Welches Folgenglied der Fibonaccifolge möchtest du wissen? " << flush;
	cin >> N;
	long f1 = 0;
	long f2 =1;
	long fz = 0;
	long fn = 0;
	for(int i=3; i<=N; ++i)
	{
		fz = f1;
		f1 = f2;
		f2 = fz + f2;
		fn = f1 + f2;
	}
	cout << "das " << N << "-te Folgenglied ist " << fn << endl;
	return 0;
}
