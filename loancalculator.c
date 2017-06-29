#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// int n, amt, period;
// float iFromUser, iCalculated, discount, monthlyPayment, totalPayback;

void userPrompt() {
	printf("Amount of loan: ");
	scanf("%d", &amt);

	printf("Period in years: ");
	scanf("%d", &period);

	printf("Interest rate: ");
	scanf("%f", &iFromUser);
}

float calculateInterest(float iFromUser) {
	return ((iFromUser / 100) / 12);
};

float calculateDiscount(int n, float iCalculated) {
	return ((pow(1 + iCalculated, n) - 1) / (iCalculated * pow(1 + iCalculated, n)));
};

float calculateLoanPayment(int amt, float discount) {
	return (amt / discount);
};

float calculateTotalPayback(float monthlyPayment, int period) {
	return ((monthlyPayment * 12) * period);
};