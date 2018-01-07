//#include <stdio.h>
//void main()
//{
//	char array1[] = "HALLO ICH HABE NICHT VIEL LUST";
//
//	int len1 = 0;
//	int i, j;
//
//	while (array1[len1] != '\0')
//	{
//		len1++;
//	}
//
//	for (i = 0; i < len1; i++)
//	{
//		//Schleife von 0 bis 25 fürs Alphabet
//		for (j = 0; j < 26; j++)
//		{
//			if ((int)array1[i] == (int)'A' + j)
//			{
//				array1[i] = (char)((int)'a' + j);
//			}
//		}
//
//	}
//
//	for (i = 0; i < len1; i++)
//	{
//		printf("%c", array1[i]);
//	}
//
//	getchar();
//}