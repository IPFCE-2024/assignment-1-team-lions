/*
Addition of two numbers 
*/

#include <stdio.h> 

int main(void) { /* Program start */
	int a, b, c, d;

    scanf("%d%d%d", &a ,&b, &c); /* Scan for intergers */

    d = a + b + c;

    printf("The sum of the three input numbers is d = %d \n", d);

	return 0;
}
