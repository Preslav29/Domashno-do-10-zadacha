#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{ 
	int a, b;
		double y;
		printf_s("Vavedi molya stoinost za a:");
		scanf_s("%d", &a);
		printf_s("Vavedi molya stoinost za b:");
		scanf_s("%d", &b);
		y = (pow (a + b, 2) - (4 * a * b)) / sqrt(3 * abs(a));
		printf_s("Stoinostta za y e: %lf", y);
		return 0;



}