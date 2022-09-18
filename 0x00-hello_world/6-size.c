#include <stdio.h>

/**
 * main - is the entry point
 *
 * Description: prints the size of various data types on the stdout
 *
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("Size of long int: %ld byte(s)\n", sizeof(li));
	printf("Size of long long int: %d bytes(s)\n", sizeof(lli));
	printf("Size of float: %d byte(s)\n", sizeof(f));
	return (0);
}
