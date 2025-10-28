#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	double x, y;
	printf_s("Vuvedi stoinost za x:");
	scanf_s("%lf", &x);
	y = abs((sqrt (2) + pow(x,5)) /  pow(x,4) + 5 * x);
	printf_s("Otgovorat e: %lf", y);
	return 0;
}