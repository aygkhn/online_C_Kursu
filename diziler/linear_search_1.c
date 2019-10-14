#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define   SIZE      10

int main()
{
	int a[SIZE];

	srand((unsigned int)time(0));

	for (int i = 0; i < SIZE; ++i) {
		a[i] = rand() % 1000;
		if (i != 0 && i % 20 == 0)
			printf("\n");

		printf("%3d ", a[i]);
	}
	printf("\n*******************************************************************************\n");

	// linear search
	//a) standart giriş akımından bir tamsayı alınız
	//b) bu tamsayı değerinde olan ilk dizi öğesinin indeksini yazdırınız:
	
	int sval;

	printf("aranacak degeri giriniz: ");
	scanf("%d", &sval);

	int i;

	for (i = 0; i < SIZE && a[i] != sval; ++i)
		; //null statement

	if (i == SIZE)
		printf("bulunamadi\n");
	else
		printf("bulundu dizinin %d indisli ogesi: (%d)\n", i, a[i]);

}
