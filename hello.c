 #include <stdio.h>
 main()
 {
 int c;
 printf("hello, world\n");

 while ((c = getchar()) != EOF) {
	 if (c == '\n') {
	 	putchar('\n');
	 	break;
	 }
	 if (c == 'a') {
	 	putchar('O');
	 }
	 putchar(c);
 }

 }