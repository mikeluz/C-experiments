#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int var = 2;
	int *varPtr;
	varPtr = &var;

	printf("Memory location %p contains the value %d\n", varPtr, *varPtr);

	int arr[] = {5, 6, 7, 8};
	int *ptr;
	ptr = arr;

	printf("Memory location %p contains the value %d\n", ptr, *ptr);
	ptr++;
	printf("Memory location %p contains the value %d\n", ptr, *ptr);
	ptr++;
	printf("Memory location %p contains the value %d\n", ptr, *ptr);
	ptr++;
	printf("Memory location %p contains the value %d\n", ptr, *ptr);

	int numElements = sizeof(arr) / sizeof(int);

	printf("There are %d elements in arr[]\n", numElements);
	
	return EXIT_SUCCESS;

}