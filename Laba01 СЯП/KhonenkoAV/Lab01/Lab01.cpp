#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
void main()
{
	int b;
	double z1;
	double z2;
	printf("input integer b: ");
	scanf("%d", &b);
	z1 = (sqrt(2 * b + 2 * sqrt(b*b - 4)))/((sqrt(b*b-4))+b+2) ;
	z2 = 1/sqrt(b+2) ;
	printf("z1(%d)=%f\n", b, z1);
	printf("z2(%d)=%f\n", b, z2);
	printf("Press any key and Enter for exit");
	scanf("%d", &b);
}