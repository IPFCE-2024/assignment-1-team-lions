#include <stdio.h>

int main (void) {

int x, y, t;

printf ("Input two numbers:\n");
scanf ("%d%d", &x, &y);

printf ("Input = (%d,%d)\n", x, y);
t = x;
x = y;
y = t;

printf ("output = (%d,%d)\n", x, y);

return 0; 
}