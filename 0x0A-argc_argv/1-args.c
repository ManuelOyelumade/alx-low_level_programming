#include <stdio.h>
/**
 * main - a program that prints the number of arguments
 * passed to it, followed by a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	if (*argv)
		printf("%d\n", argc - 1);
	return (0);
}