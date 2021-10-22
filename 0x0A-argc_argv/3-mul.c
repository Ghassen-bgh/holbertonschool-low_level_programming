#include<stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: The size of the argv array.
 * @argv: An array of size argc.
 * Return: 0 on success, 1 if two arguments not given
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
		}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
