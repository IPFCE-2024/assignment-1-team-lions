/*
Addition of two numbers 
*/

#include <stdio.h> 

int main(void) { /* Program start */
	float a, b, c, d, e;

    scanf("%f%f%f%f", &a ,&b, &c, &d); /* Scan for intergers */

    e = a + b + c + d;

    printf("The sum of the three input numbers is e = %f \n", e);

	return 0;
}
