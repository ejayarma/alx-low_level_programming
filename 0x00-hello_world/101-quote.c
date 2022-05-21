#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - main entry of program
 * Return: always 0
 */
int main(void)
{
	size_t len;
	char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n\0";
	len = strlen(quote);

	write(STDIN_FILENO, quote, len);

	return (0);
}
