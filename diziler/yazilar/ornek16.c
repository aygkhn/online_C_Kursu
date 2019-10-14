/*
  Tamsayıdan yazıya dönüşüm.
  Negatif tamsayılar işlenmiyor.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


#define   SIZE      100

int main()
{
	int x;

	printf("bir tamsayi giriniz: ");
	scanf("%d", &x);

	int temp = x;
	char str[SIZE];
	int idx = 0;

	while (temp != 0) {
		str[idx++] = temp % 10 + '0';
		temp /= 10;
	}

	str[idx] = '\0';

	for (int i = 0; i < idx / 2; ++i) {
		char ctmp = str[i];
		str[i] = str[idx - 1 - i];
		str[idx - 1 - i] = ctmp;
	}

	printf("(%s)\n", str);

}
