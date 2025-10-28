#include <iostream>
#include <math.h>
#include <stdio.h>




int main()
{
	int a, b ;
	double y;
	printf_s("Vavedi stoinost za a:");
	scanf_s("%d", &a);
	printf_s("Vavedi stoinost za b: ");
	scanf_s("%d", &b);
	y = (2 * a + b * b * b) / sqrt(8);
	printf_s("Stoinostta na y e: %lf", y);
	return 0;

}
