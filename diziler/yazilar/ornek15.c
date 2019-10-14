/*
	Yazıdan sayıya dönüşüm. 
	ikilik sayı sisteminde bir tamsayı değer ifade eden yazıyı tamsayıya dönüştürmek
*/

#include <stdio.h>

#define   SIZE      100

int main()
{
	char str[SIZE];

	printf("ikilik sayi sisteminde bir sayi girin: ");
	scanf("%s", str);
	printf("(%s)\n", str);
	int ival = 0;

	for (int i = 0; str[i] != '\0'; ++i) {
		ival = ival * 2 + str[i] - '0';
	}

	printf("ival = (%d)\n", ival);
}
