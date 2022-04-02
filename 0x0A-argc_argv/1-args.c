#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Displays the number of arguments passed to the program
 * main - program entry
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc);
	return (0);
}
