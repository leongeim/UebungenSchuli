//#include <stdio.h>
//void main()
//{
//	char array1[] = "HALLO ICH HABE NICHT VIEL LUST LALALALALA HULA HOOP";
//	char wort[] = "ICH";
//
//	int len1 = 0;
//	int len2 = 0;
//	int stelleWort = -1;
//	int i, j;
//
//	while (array1[len1] != '\0')
//	{
//		len1++;
//	}
//	while (wort[len2] != '\0')
//	{
//		len2++;
//	}
//
//	for (i = 0; i < len1; i++)
//	{
//		for (j = 0; j < len2; j++)
//		{
//			if (array1[i+j] == wort[j])
//			{
//				stelleWort = i;
//			}
//			else
//			{
//				stelleWort = -1;
//				break;
//			}
//		}
//
//		if (stelleWort >= 0)
//			break;
//
//	}
//
//	if (stelleWort == -1)
//	{
//		printf("Wort nicht zu finden.");
//	}
//	else
//	{
//		printf("%d", stelleWort);
//	}
//
//
//	getchar();
//}