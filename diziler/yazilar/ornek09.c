#include <stdio.h>
#include <ctype.h>

#include "nutility.h"

#define   SIZE      1000

//remove_copy algoritması

int main()
{
	char source[SIZE]; //denemeden denemeyi deneyimleyemezsin 
	char dest[SIZE];

	printf("bir yazi girin: ");
	sgets(source);

	printf("bir karakter girin: "); //e
	int c = getchar();
	
	//source dizisindeki yazıyı dest dizisine içindeki c karakterleri olmadan kopyalayin

	int write_idx = 0;

	for (int i = 0; source[i] != '\0'; ++i) {
		if (source[i] != c)
			dest[write_idx++] = source[i];
	}

	dest[write_idx] = '\0';

	printf("(%s)\n", dest);  //(dnmdn dnmyi dnyimlymzsin)

}
