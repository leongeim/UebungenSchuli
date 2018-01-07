//#include <stdio.h>
//void main()
//{
//	char array2[] = "";
//	char array1[] = "Hallo mein Name ist Käse!";
//
//	int len1 = 0;
//	int i;
//	//char wegspeichern
//	char speicher = array1[0];
//
//	while (array1[len1] != '\0')
//	{
//		len1++;
//	}
//
//	for (i = 0; i < len1; i++)
//	{
//		array2[i] = array1[i + 1];
//	}
//
//	//weggespeicherten char an letzte Stelle im neuen Array setzen
//	array2[len1-1] = speicher;
//
//	for (i = 0; i < len1; i++)
//	{
//		printf("%c", array2[i]);
//	}
//
//	getchar();
//}