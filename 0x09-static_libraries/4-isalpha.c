#include "main.h"

/**
* _isalpha - Determines alphabetic characters
* @c: Character to be evaluated
*
* Description: This function uses the ASCII code to determine
* the letter of the alphabet
* Return: 1 (letter of alphabet) or 0 (not letter of alphabet)
*/
int _isalpha(int c)
{
		if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
