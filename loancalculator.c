#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// n = # of annual payments;
int n = 12;
int amt;
int period;
float iFromUser;
float iCalculated;
float discount;
float monthlyPayment;
float totalPayback;

float calculateInterest(float iFromUser);
float calculateDiscount(int n, float iCalculated);
float calculateLoanPayment(int amt, float discount);
float calculateTotalPayback(float monthlyPayment, int period);

int main(void) {
	
	// 1. prompt user to enter amount, period, and interest rate
	printf("Amount of loan: ");
	scanf("%d", &amt);

	printf("Period in years: ");
	scanf("%d", &period);

	printf("Interest rate: ");
	scanf("%f", &iFromUser);

	// 2. process data
	n = n * period;
	iCalculated = calculateInterest(iFromUser);
	discount = calculateDiscount(n, iCalculated);
	monthlyPayment = calculateLoanPayment(amt, discount);
	totalPayback = calculateTotalPayback(monthlyPayment, period);

	// 3. print monthly payment and total payment to console
	printf("Monthly Payment Amount: %f / Total Payback: %f\n", monthlyPayment, totalPayback);

	return EXIT_SUCCESS;
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