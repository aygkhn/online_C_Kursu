#include <stdio.h>

#define   SIZE      100


int main()
{
	char s1[SIZE];
	char s2[SIZE];

	printf("iki isim giriniz: "); //murat cetin
	scanf("%s%s", s1, s2);

	//s1 dizisinde tutulan yazının sonuna s2 dizisinde tutulan yazıyı ekleyiniz

	int i;

	for (i = 0; s1[i] != '\0'; ++i)
		; //null statement

	for (int k = 0; s2[k] != '\0'; ++k)
		s1[i++] = s2[k];

	s1[i] = '\0';

	printf("(%s)\n", s1); // (muratcetin)
}

