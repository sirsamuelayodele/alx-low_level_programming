#include <stdio.h>

/**
 * main - main function or the entry point
 * Description: Printing alphabets in lowercase
 * Return: Always 0 (correct)
 */
int main(void)
{
	char ch, CH;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (CH = 'A'; CH <= 'Z'; CH++)
		putchar(CH);
		putchar('\n');
	return (0);
}
