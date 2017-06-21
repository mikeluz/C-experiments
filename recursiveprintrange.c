#include <stdio.h>
#include <stdlib.h>

// declare function prototypes
void printValue(int lower, int upper);

int main(void) {

	printf("---------- RECURSIVELY PRINT RANGE OF NUMBERS -----------\n");
	printf("Enter Lower Bound: ");
	int lowerBound;
	scanf("%d", &lowerBound);
	printf("Enter Upper Bound: ");
	int upperBound;
	scanf("%d", &upperBound);

	printValue(lowerBound, upperBound);

	return EXIT_SUCCESS;
}

void printValue(int lower, int upper) {
	if (lower > upper) {
		return;
	}
	printf("%d\n", lower);
	printValue(lower+1, upper);
}