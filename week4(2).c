//put2.c
#include <stdio.h>

#define MESSAGE "hello,wold"//세미콜론 없다

main(void) {
	puts("Using puts():");
	puts(MESSAGE);//

	puts("\nUsing putc():");
		for (int i = 0; MESSAGE[i] != '\0'; i++) {
			putchar(MESSAGE[i]);
		}
	putchar('\n'); //putc() 사용할때 줄바꿈 없음

	//3
	puts("\nUsing putc():");
	for (int i = 0; MESSAGE[i] != '\0'; i++) {
		putc(MESSAGE[i], stdout);
	}
	putc('\n', stdout); //putc() 사용할때 줄바꿈 없음


	return 0;
}