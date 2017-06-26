 #include <stdio.h>
 /* count digits, white space, others */
 int main(void)
 {
 int c, i, nwhite, nother;
 int test;
 int ndigit[10];
 nwhite = nother = 0;
 
 for (i = 0; i < 10; ++i)
 	ndigit[i] = 0;

 // '\n' instead of EOF for test console logging purposes
 while ((c = getchar()) != '\n') {

 	if (c >= '0' && c <= '9')
 	 	++ndigit[c-'0'];
 	else if (c == ' ' || c == '\n' || c == '\t')
 		++nwhite;
 	else
 		++nother;

  	test = (c-0);
 		printf("%d\n", test);
 		test = (c-'0');
 		printf("%d\n", test);
		test = c;
 		printf("%d\n", test);

 }
 printf("digits =");
 
 	for (i = 0; i < 10; ++i)
 		printf(" %d", ndigit[i]);
 		printf(", white space = %d, other = %d\n", nwhite, nother);
 }