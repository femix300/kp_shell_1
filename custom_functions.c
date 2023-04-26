#include "main.h"


/**
 * my_atoi - Converts a string to integer
 * @s: string to be converted
 *
 * Return: Converted string
 */
int my_atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * my_strcpy - Copies a string
 *
 * @dest: Destination
 *
 * @src: source string
 *
 * Return: pointer to dest
 */
char my*_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * _strileng - String length
 *
 * @s: String
 *
 * Return: String length
 */
int _strileng(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * my_strncpy - Copies a string at maximum bytes
 *
 * @desti: Destination
 *
 * @src: Source
 *
 * @b: maximum number of bytes to copy
 *
 * Return: pointer to the resulting string dest
 */
char *my_strncpy(char *desti, const char *src, int b)
{
	int j;

	for (j = 0; i < b && src[j] != '\0'; j++)
		desti[j] = src[j];

	for ( ; j < b; j++)
		desti[j] = '\0';

	return (desti);
}

/**
 * my_strcmp - Compares two strings
 *
 * @fs1: First string
 *
 * @ss2: Second string
 *
 * Return: integer less than, equal to, or greater than zero if s1 is found,
 * respectively, to be less than, to match, or be greater than s2.
 */
int my_strcmp(char *fs1, char *ss2)
{
	int j;

	for (j = 0; fs1[j] != '\0' && ss2[j] != '\0'; j++)
	{
		if (fs1[j] != ss2[j])
			return (fs1[j] - ss2[j]);
	}

	if (fs1[j] != '\0' || ss2[j] != '\0')
		return (fs1[j] - ss2[j]);

	return (0);
}

/**
 * _strncat - concatenates at most n bytes from src to dest
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to concatenate
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, const char *src, int n)
{
	char *temp = dest;

	/* Move to the end of dest */
	while (*dest)
		dest++;

	/* Copy at most n bytes from src to dest */
	while (*src && n--)
		*dest++ = *src++;

	/* Add null terminator to dest */
	*dest = '\0';

	return (temp);
}

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes, of the new memory block
 * Return: pointer to the new memory block, or NULL if new_size is 0
 * and ptr is not NULL or if malloc fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			return (NULL);
		}
		return (new_ptr);
	}

	if (new_size <= old_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	memcpy(new_ptr, ptr, old_size);
	free(ptr);
	return (new_ptr);
}

/**
 * my_strcmp - Compares two strings
 *
 * @fs1: First string
 *
 * @ss2: Second string
 *
 * @g: Number of strings to be compared
 *
 * Return: integer less than, equal to, or greater than zero if s1 is found,
 * respectively, to be less than, to match, or be greater than s2.
 */
int my_strncmp(char *fs1, char *ss2, int g)
{
        int j;

        for (j = 0; fs1[j] != '\0' && ss2[j] != '\0'; j++)
        {
                if (fs1[j] != ss2[j])
                        return (fs1[j] - ss2[j]);
        }

        if (fs1[j] != '\0' || ss2[j] != '\0')
                return (fs1[j] - ss2[j]);

        return (0);
}

/**
 * my_getenv - Environment variable
 *
 * @name: Environment name
 *
 * Return: Name
 */

char *my_getenv(const char *name)
