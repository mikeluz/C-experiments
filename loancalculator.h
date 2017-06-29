#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#ifndef LOANCALCULATOR_H_
#define LOANCALCULATOR_H_

int n, amt, period;
float iFromUser, iCalculated, discount, monthlyPayment, totalPayback;

void userPrompt(void);
float calculateInterest(float iFromUser);
float calculateDiscount(int n, float iCalculated);
float calculateLoanPayment(int amt, float discount);
float calculateTotalPayback(float monthlyPayment, int period);

#endif