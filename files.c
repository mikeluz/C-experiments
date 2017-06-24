#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINE_LENGTH 30
#define TRUE 1
#define FALSE 0

void writeSomething(void);

int main(void) {

	writeSomething();

	return EXIT_SUCCESS;
}

void writeSomething(void) {

	srand(time(NULL));

	FILE *fp;
	fp = fopen("/Users/mikeluz/Documents/C/test.txt", "w");

	char line[] = "Random Number: \n";

	for (int k = 0; k < LINE_LENGTH; k++) {
		fprintf(fp, "%s", "---------------------------------\n");
		int x = rand() % 50;
		if (x % 2 == 0) {
			fprintf(fp,"%d %s\n%d%s\n", k, line, x, " IS EVEN\n");
		} else {
			fprintf(fp,"%d %s\n%d%s\n", k, line, x, " IS ODD\n");
		}
	}

	fclose(fp);

}