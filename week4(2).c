//put2.c
#include <stdio.h>

#define MESSAGE "hello,wold"//�����ݷ� ����

main(void) {
	puts("Using puts():");
	puts(MESSAGE);//

	puts("\nUsing putc():");
		for (int i = 0; MESSAGE[i] != '\0'; i++) {
			putchar(MESSAGE[i]);
		}
	putchar('\n'); //putc() ����Ҷ� �ٹٲ� ����

	//3
	puts("\nUsing putc():");
	for (int i = 0; MESSAGE[i] != '\0'; i++) {
		putc(MESSAGE[i], stdout);
	}
	putc('\n', stdout); //putc() ����Ҷ� �ٹٲ� ����


	return 0;
}