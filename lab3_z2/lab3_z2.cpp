#include <stdio.h>
#include <math.h>

int main()
{
	double num1, num2, num3;
	printf("num1 = ");
	scanf_s("%lf", &num1);

	printf("num2 = ");
	scanf_s("%lf", &num2);

	printf("num3 = ");
	scanf_s("%lf", &num3);

	if ((num1 > num2) && (num2 > num3)) {
		num1 = num1 * (-1);
		num2 = num2 * (-1);
		num3 = num3 * (-1);
		printf("%.0lf\n%.0lf\n%.0lf", num1, num2, num3);
	}
	else {
		double sumquad;
		sumquad = pow(num1,2)+pow(num2,2)+pow(num3,2);
		printf("%.0lf^2 + %.0lf^2 + %.0lf^2 = %.0lf", num1, num2, num3, sumquad);
	}
}
