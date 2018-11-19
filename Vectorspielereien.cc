#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

/* 
int main(int argc, char** argv)
{
	//leerer vector für ganze Zahlen
	std::vector<double> v1;
	//mit 10 Einträgen
	std::vector<double> v2(10);
	// mit expliziten Einträgen
	std::vector<double> v3{{3, 8, 7, 5, 9, 2}};
	//Anzahl der einträge ausgeben
	std::cout << v3.size() << std::endl;
	//Verändert Länge der Liste
	v2.resize(42);
	std::cout v3[2] << std::endl;
	
}
*/

std::pair<double,double> grossklein(std::vector<double> v)
{
	double s = v[0]; double b = v[0];
	for (int i = 0; i <= v.size(); i++)
	{
		if (v[i] < s)
			{ s = v[i];}
		if (v[i] > b)
			{b = v[i];}
	}
	return std::make_pair(b,s);
}

std::vector<double> reversed(std::vector<double>& v)
{
	std::vector<double> w = v;
	for (int i = 0; i<= v.size();i++)
	{
		v[i] = w[v.size() - i];
	}
	return v;

}


int main(int argc, char** argv)
{
	//leerer vector für ganze Zahlen
	std::vector<double> v1;
	//mit 10 Einträgen
	std::vector<double> v2(10);
	// mit expliziten Einträgen
	std::vector<double> v3{{3, 8, 7, 5, 9, 2}};
	//Anzahl der einträge ausgeben
	std::cout << v3.size() << std::endl;
	//Verändert Länge der Liste
	v2.resize(42);
	std::cout << v3[2] << std::endl;

	/* for (int i = 0; i <= v2.size(); i++)
	{
		std::cout << v2[i] << std::endl;
	}
	for (int i = 0; i <= v1.size(); i++)
	{
		std::cout << v1[i] << std::endl;
	} */
	for (int i = 0; i <= v3.size(); i++)
	{
		std::cout << v3[i] << std::endl;
	}
	std::cout << "grossklein v3 1 und 2" << grossklein(v3).first << " " << grossklein(v3).second << std::endl;
	std::vector<double> v4 = reversed(v3);
	std::cout << "reversed v3" << std::endl;
	for (int i = 0; i <= v4.size(); i++)
	{
		std::cout << v4[i] << std::endl;
	}
	std::cout << grossklein(v4).first << std::endl;
}
