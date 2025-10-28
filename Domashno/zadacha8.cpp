#include <iostream>
#include <math.h>
#include <stdio.h>

int main()
{
	double a, y, b;
	printf_s("Vuvedi stoinost za a:");
	scanf_s("%lf", &a);
	printf_s("Vuvedi stoinost za b:");
	scanf_s("%lf", &b);
	if ((a + b) < 0 || (a - b) < 0) {
        printf("Greksa: Nerealni rezultati (koren ot negativno chislo)");
        return 1;
    }

    y = sqrt(a + b) - sqrt(a - b);
    printf("Otgovorat e: %lf", y);

    return 0;
}