#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define   SIZE      100

int main()
{
	int a[SIZE];

	srand((unsigned int)time(0));

	for (int i = 0; i < SIZE; ++i) {
		a[i] = rand() % 20;
		if (i != 0 && i % 20 == 0)
			printf("\n");

		printf("%3d ", a[i]);
	}
	printf("\n*******************************************************************************\n");

	// linear search
	//a) standart giriş akımından bir tamsayı alınız
	//b) bu tamsayı değerinde olan tüm dizi öğelerinin indeksini yazdırınız:
	
	int sval;

	printf("aranacak degeri giriniz: ");
	scanf("%d", &sval);

	int cnt = 0;
	for (int i = 0; i < SIZE; ++i)
		if (a[i] == sval) {
			printf("a[%d] = %d\n", i, a[i]);
			++cnt;
		}

	if (cnt != 0)
		printf("toplam %d oge bulundu\n", cnt);
	else
		printf("%d degerine sahip hicbir oge yok\n", sval);

}
