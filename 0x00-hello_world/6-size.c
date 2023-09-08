#include <stdio.h>
/**
 * main - To print a line of code that show size
 *
*/

int main(void)
{	int a;
	long int b;
	long long int c;
	char d;
	float e;
	printf("Size of a char: %lu byte(S)\n", (unsinged long)sizeof(a));
	printf("Size of an int: %lu byte(S)\n", (unsinged long)sizeof(b))

	printf("Size of a long int: %lu byte(S)\n", (unsinged long)sizeof(c));
 
	printf("Size of a long long int: %lu byte(S)\n", (unsinged long)sizeof(d));
 
	printf("Size of a float  : %lu byte(S)\n", (unsinged long)sizeof(e));
 
 
	return (0);
}


