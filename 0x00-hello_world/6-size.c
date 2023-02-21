#include <stdio.h>
/**
 * main - A  program that prints the size of various types on the computer it is compiled and run on
 * Return: always 0 (Success)
 */
int main(void)
{
printf("Size of a char: %d byte(s)", sizeof(char));
pfintf("Size of a int: %d byte(s)", sizeof(int));
printf("Size of a long int: %d byte(s)", sizeof(long int));
printf("Size of a long long int: %d byte(s)", sizeof(long long int));
printf("Size of float: %d byte(s)", sizeof(float));
return (0);
}
