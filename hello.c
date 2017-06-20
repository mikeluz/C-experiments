 #include <stdio.h>
 int main(void)
 {
 int c;
 printf("hello, world\n");

 while ((c = getchar()) != EOF) {
	 if (c == '\n') {
	 	putchar('\n');
	 	puts("Done.");
	 	return 0;
	 }
	 if (c == 'a') {
	 	putchar('O');
	 }
	 putchar(c);
 }

 }