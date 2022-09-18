#include <unistd.h>

/**
 * main - prints the sting in the write function
 *
 * Description: print on stdout using write function
 *
 * Return: 0
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar,2015-10-19\n",59);
	return (1);
}
