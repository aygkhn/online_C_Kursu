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

	//yukarıdaki dizinin hem tek değerde (odd) hem de çift değerde olan öğelerinin aritmetik ortalamasını bularak ekrana yazdırınız:
	

	int sum_odd = 0;
	int sum_even = 0;
	int odd_cnt = 0;

	for (int i = 0; i < SIZE; ++i) {
		if (a[i] % 2 != 0) {
			sum_odd += a[i];
			++odd_cnt;
		}
		else {
			sum_even += a[i];
		}
	}

	if (odd_cnt != 0)
		printf("teklerin ortalamasi = %f\n", (double)sum_odd / odd_cnt);
	else
		printf("dizide hic tek sayi yok\n");

	if (sum_even != 0)
		printf("ciftlerin ortalamasi = %f\n", (double)sum_even / (SIZE - odd_cnt));
	else
		printf("dizide hic cift sayi yok\n");
}
