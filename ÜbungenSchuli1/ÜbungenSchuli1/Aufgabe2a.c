//#include <stdio.h>
//void main()
//{
//	//Wenn man array3 nach den anderen deklariert gibts Speicherprobleme
//	char array3[] = "";
//	char array1[] = "Hallo mein Name ist Kaese!";
//	char array2[] = "Richtige Saetze...";
//	
//	int len1 = 0, len2 = 0;
//	int i;
//
//	while (array1[len1] != '\0')
//	{
//		array3[len1] = array1[len1];
//		printf("%c", array1[len1]);
//		len1++;
//	}
//
//	printf("\n");
//
//	while (array2[len2] != '\0')
//	{
//		array3[len1 + len2] = array2[len2];
//		printf("%c", array2[len2]);
//		len2++;
//	}
//
//	printf("\n");
//
//		
//
//	for (i = 0; i < len1+len2; i++)
//	{
//		printf("%c", array3[i]);
//	}
//
//	getchar();
//}