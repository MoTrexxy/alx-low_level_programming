/**
* _strcpy - main function
* @dest: pointer to the destination buffer
* @src: source
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int length, m;

	length = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	for (m = 0; m < length; m++)
	{
		dest[m] = src[m];
	}
	dest[m] = '\0';

	return (dest);
}
