#include <stdio.h>
void main()
{
	char array1[] = "1234567890123456790";

	int len1 = 0;
	int i;
	char speicher;

	while (array1[len1] != '\0')
	{
		len1++;
	}

	for (i = 3; i < len1; i += 6)
	{
		speicher = array1[i - 3];
		array1[i - 3] = array1[i];
		array1[i] = speicher;
	}

	for (i = 0; i < len1; i++)
	{
		printf("%c", array1[i]);
	}

	getchar();
}