#include <stdio.h>
#include <unistd.h>

/**
 * main - prints exactly and that piece of art is useful
 *
 * Reurn: Alway 0 (success)
*/

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19");
	return (0);
}
