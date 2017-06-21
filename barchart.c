#include <stdio.h>
#include <stdlib.h>

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

	while (counter < size) {
		printf("X");
		counter++;
	}
	printf("\n");

}

void printChart(int number) {
	
	int i;

	for (i = 0; i < number; i++) {
		printBar(i);
	}

}