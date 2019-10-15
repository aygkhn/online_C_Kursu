#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define   SIZE      100

int main()
{
	char s1[SIZE];
	char s2[SIZE];
	char s3[SIZE];

	printf("iki isim giriniz: "); //murat cetin
	scanf("%s%s", s1, s2);

	/*
		iki ismi (s1 ve s2 dizilerindeki yazıları) s3 dizisinde birleştiriniz:
	*/

	int i;

	for (i = 0; s1[i] != '\0'; ++i)
		s3[i] = s1[i];

	for (int k = 0; s2[k] != '\0'; ++k) {
		s3[i++] = s2[k];
	}

	s3[i] = '\0';

	printf("(%s) + (%s) = (%s)\n", s1, s2, s3); //(murat) + (cetin) = (muratcetin)
}
