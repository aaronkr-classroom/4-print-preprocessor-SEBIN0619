//escape.c
#include <stdio.h>

int main(void) {
	printf("Hello~ hanbat.ac.kr\n");
	printf("Hello~ hanbat.ac.kr\rHi~~~~~~~\n");

	printf("12345678901234567890\n");
	printf("a\tbc\tde\tg");

	printf("1234567890\b\b\babc");
	printf("\aError!");

	return 0;
}