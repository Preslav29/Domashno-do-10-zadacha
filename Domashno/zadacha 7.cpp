#include <iostream>
#include <stdio.h>
#include <math.h>
int main()
{
	double x, a, y;
	printf_s("Vuvedi stoinost za x:");
	scanf_s("%lf", &x);
	printf_s("Vuvedi stoinost za a:");
	scanf_s("%lf", &a);
	y = pow(( x + a ), 5) + abs(x + 2 * a ) / (5 * a + sqrt(pow(a,5)));
	printf_s("Otgovorat e: %lf", y);
	return 0;
}