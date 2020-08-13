#include <stdio.h>
int main()
{
	float x = 0;
	double pi = (double)22 / 7;
	scanf_s("%f", &x);
	if (x < 0) printf("Error");
	else printf("%.2lf", (double)x * x * pi);
	return 0;
}