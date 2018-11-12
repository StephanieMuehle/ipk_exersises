#include <iostream>

int main(int argc, char** argv)
{
	int sum;
	int n = 10;
	//calculate the sum of all numbers from 1 to n
	//deleted i (not necessary), improved for loop (j instead of i)
	for (int j = 1;j <= n;j++)
	{
	sum = sum + j;
	}
	std::cout << sum << std::endl;
	return 0;
}
