#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int celsius;
	float farenheit;
	float kelvin;
	float test;

	printf("---------- CONVERT CELSIUS TO FARENHEIT AND KELVIN -----------\n");
	printf("Enter Celsius: ");

	// second arg is the variable you declared above, it is where the read value is going
	// & is used with "scanf" because it ASSIGNS the value, not needed when just reading as below in printf
	scanf("%d", &celsius);

	// in order to make output correct decimal, ints used in calculation must have ".0" added to coerce to float
	farenheit = ((celsius) * (9.0 / 5.0) + 32.0);
	kelvin = (celsius + 273.0);

	printf("Temperature in F and K: %f and %f\n", farenheit, kelvin);

	return EXIT_SUCCESS;
}