#include "main.h"

/**
  * rot13 - Entry point
 * ONE if, TWO loops only...
 * @*: input
 * Return: decrypted string
 */
char *rot13(char *)
{
	char *input, *output;
	int count, count2;

	input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	count = 0;
	while (*[count] != '\0')
	{
		count2 = 0;
		while (input[count2] != '\0')
		{
			if (*[count] == input[count2])
			{
				str[count] = output[count2];
				break;
			}
			count2++;
		}
		count++;
	}
	return (*);
}
