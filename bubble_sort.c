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
		a[i] = rand() % 1000;
		if (i != 0 && i % 20 == 0)
			printf("\n");

		printf("%3d ", a[i]);
	}
	printf("\n*******************************************************************************\n");

	// yukarıdaki diziyi "bubble sort" algoritması küçükten büyüğe sıralayınız:

	for (int i = 0; i < SIZE - 1; ++i) {
		for (int k = 0; k < SIZE - 1 - i; ++k) {
			if (a[k] > a[k + 1]) {
				int temp = a[k];
				a[k] = a[k + 1];
				a[k + 1] = temp;
			}
		}
	}


	for (int i = 0; i < SIZE; ++i) {
		if (i != 0 && i % 20 == 0)
			printf("\n");
		printf("%3d ", a[i]);
	}
	printf("\n*******************************************************************************\n");

}
