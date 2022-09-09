#include <stdio.h>
/**
 * main - Entry point
 * Description: printing alphabets in lowercase
 * Return: Always 0 (correct)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
		putchar('\n');
	return (0);
}
