#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	double x, y;
	printf_s("Vuvedi stoinost za x:");
	scanf_s("%lf", &x);;
	y = (5 - pow(x,5)) / 3 - x + 1 ;
	printf_s("Otgovorat e: %lf", y);
	return 0;
}