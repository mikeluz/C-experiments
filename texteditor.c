#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char c;

	FILE *fp;
	fp = fopen("/Users/mikeluz/Documents/C/texteditor.txt", "w");

	while ((c = getchar()) != EOF) {
		fprintf(fp, "%c", c);
	}

	fclose(fp);

}
