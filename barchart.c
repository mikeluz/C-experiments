#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printBar(int size);
void printChart(int number);

int main(void) {

	int num;

	printf("Pick a number: ");
	scanf("%d", &num);

	printChart(num);

	return EXIT_SUCCESS;
}

void printBar(int size) {

	int counter = 1;

	if (!size) {
		size = 1;
	}

	do {
		if (counter == 1 || counter == 0) {
			printf("%2.d: ", size);
		}
		printf("X");
		counter++;
	} while (counter < size);
	printf("\n");

}

void printChart(int number) {

	int dataSet[number];
	int i;

	srand(time(NULL));

	for (i = 0; i < number; i++) {
		dataSet[i] = rand() % 50;
	}
	
	i = 0;

	for (i = 0; i < number; i++) {
		printBar(dataSet[i]);
	}

}