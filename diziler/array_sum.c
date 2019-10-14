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

	//yukarıdaki dizinin ogelerinin toplamini bulunuz ve ekrana yazdiriniz.
	//yukarıdaki dizinin ogelerinin aritmetik ortalamasini bulunuz ve ekrana yazdiriniz

	int sum = 0;
	for (int i = 0; i < SIZE; ++i) {
		sum += a[i];
	}

	printf("toplam   = %d\n", sum);
	printf("ortalama = %f\n", (double)sum / SIZE);
}
