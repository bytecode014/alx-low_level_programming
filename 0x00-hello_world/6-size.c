#include <stdio.h>
/**
 * main - A  program that prints the size of various types on the computer it is compiled and run on
 * Return: always 0 (Success)
 */
int main(void)
{
printf("Size of a char: %lu byte(s)\n", sizeof(char));
pfintf("Size of a int: %lu byte(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
printf("Size of float: %lu byte(s)", sizeof(float));
return (0);
}
