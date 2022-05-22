#include "Functions.h"
#include <math.h>
int powerMoja(int x, int n)
{
	if (n == 1)
		return x;
	if (n == 0)
		return 0;
	int result = x;
	int i = 1;
	do
	{
		result *= x;
		++i;
	} while (i < n);

	return result;
}
int power(int a, int b)
{
	if (b < 0)
		return -1;
	if (b == 0)
		return 1;
	if (b == 1)
		return a;
	int r = 1;
	for (int i = 0; i < b; i++)
	{
		r *= a;
	}
	return r;
}
float power(float a, float b)
{
	return static_cast<float>(pow(a, b)); // rzutowanie stratne robimy jawnie (pow() - zwraca double, dlatego jest rzutowanie
}
double power(double a, double b)
{
	return pow(a, b); 
}