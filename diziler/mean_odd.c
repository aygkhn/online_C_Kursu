#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define   SIZE      100

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

	//yukarıdaki dizinin tek değerde (odd) olan öğelerinin aritmetik ortalamasını bularak ekrana yazdırınız:
	

	int sum_odds = 0;
	int odd_cnt = 0;

	for (int i = 0; i < SIZE; ++i) {
		if (a[i] % 2 != 0) {
			sum_odds += a[i];
			++odd_cnt;
		}
	}

	if (odd_cnt != 0)
		printf("teklerin ortalamasi = %f\n", (double)sum_odds / odd_cnt);
	else
		printf("dizide hic tek sayi yok\n");
}
