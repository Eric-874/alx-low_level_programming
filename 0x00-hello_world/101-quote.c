#include <unistd.h>
/**
 * main - prints "and that piece of art is useful" - Dora Korper, 2015-10-19",
 * folowed  by a newline, to standard error.
 * Return: Always 1.
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korper, 2015-10-19\n", 59);
	return (1);
}