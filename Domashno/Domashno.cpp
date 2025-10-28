// Domashno.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <math.h>


int main()
{
	int a,b;
	double y ;
	printf("Vavedete stoinost za a:");
	scanf_s("%d", &a);
	printf("Vavedete stoinost za b:");
	scanf_s("%d", &b);

	y = sqrt(a * a + 2 * a * b + b * b);

	printf("Stoinostta na y e: %lf", y);
	return 0;
}
