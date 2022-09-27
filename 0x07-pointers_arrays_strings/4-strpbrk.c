#include "main.ih"

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: source string
 * @accept: accepted characters
 * Return: the string since the first found accepted character
 */

char *_strpbrk(char *s, char *accept)
{
	int x = 0, y;

	while (s[x])
	{
		y = 0;
		while (accept[y])
			if (s[x] == accept[y])
			{
				s += x;
				return (s);
			}

			y++;
		}

		x++;

	}
	return ('\0');

}

