#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The destination string that will concatenate the source string
 * @s2: The source string that is to be concatenated.
 * Return: Return NULL or a pointer.
 */

char *str_concat(char *s1, char *s2)
{
	int m = 0;
	int i = 0;
	int n;

	s1 = malloc((m + 1) * sizeof(char));

	for (i = 0; s2[i] != '\0' && i < n; i++)

	{
		s1[m + i] = s2[i];
	}
	s1[m + i] = '\0';
	return (s1);

	if (s1 == NULL)
	{
		free(s1);
		s1 = NULL;
	}

	else

	return (NULL);
}

