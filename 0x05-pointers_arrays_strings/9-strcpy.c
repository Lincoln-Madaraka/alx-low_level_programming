#include "main.h"
/**
 * *_strcpy -  function that copies the string pointed to by src
 * including the terminating null byte
 * to the buffer pointed to by dest
 * @dest: char type string
 * @src: char type string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int z = -1;

	do {
		z++;
		dest[z] = src[z];
	} while (src[z] != '\n');
	return (dest);
}
