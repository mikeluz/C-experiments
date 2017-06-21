#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int centimeters;
	double inches;
	int feet;
	double remainderInches;

	printf("---------- CONVERT CENTIMENTERS TO FEET AND INCHES -----------\n");
	printf("Enter Centimeters: ");

	// second arg is the variable you declared above, it is where the read value is going
	// & is used with "scanf" because it ASSIGNS the value, not needed when just reading as below in printf
	scanf("%d", &centimeters);

	inches = centimeters / 2.54;
	remainderInches = inches;
	feet = inches / 12;
	inches = remainderInches - (feet * 12);

	printf("Length in feet and inches: %d' - %f''\n", feet, inches);

	return EXIT_SUCCESS;
}