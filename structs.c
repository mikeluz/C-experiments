#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// max number of band members
#define MAX_NAMES        5
// max length of given individual name
#define MAX_NAME_LENGTH 30

struct musician {
	char firstName[MAX_NAME_LENGTH];
	char lastName[MAX_NAME_LENGTH];
	char instrument[MAX_NAME_LENGTH];
	int age;
	char hero[MAX_NAME_LENGTH];
};

char bankOfFirstNames[MAX_NAMES][MAX_NAME_LENGTH] = {"Mike", "Tyler", "Andy"};
char bankOfLastNames[MAX_NAMES][MAX_NAME_LENGTH] = {"Luz", "Agnew", "Bianchi"};
char bankOfInstruments[MAX_NAMES][MAX_NAME_LENGTH] = {"Bass VI", "Guitar", "Drums"};
char bankOfHeros[MAX_NAMES][MAX_NAME_LENGTH] = {"Jimi Hendrix", "Dave Mustaine", "Keith Moon"};

struct musician band[MAX_NAMES];

void printMember(void);
void populateBand(void);

int main(void) {

	populateBand();
	printf("----------- PESCI DEVITO --------------\n");
	printMember();

	return EXIT_SUCCESS;
}

// fills band array with musician structs
void populateBand(void) {
	for (int i=0; i<MAX_NAMES; i++) {
		strcpy(band[i].firstName, bankOfFirstNames[i]);
		strcpy(band[i].lastName, bankOfLastNames[i]);
		strcpy(band[i].instrument, bankOfInstruments[i]);
		band[i].age = 32;
		strcpy(band[i].hero, bankOfHeros[i]);
	}
}

void printMember(void) {
	for (int i=0; i<3; i++) {
		printf("First name: %10s\n", band[i].firstName);
		printf("Last name: %10s\n", band[i].lastName);
		printf("Instrument: %10s\n", band[i].instrument);
		printf("Age: %3d\n", band[i].age);
		printf("Hero: %10s\n\n", band[i].hero);
	}
}