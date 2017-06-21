#include <stdio.h>
#include <stdlib.h>

// define buy and sell price points
#define SELL_PRICE_POINT 45.6
#define BUY_PRICE_POINT 24.4

char fluctuation(int currentPrice);
void buyOrNot(char advice);
void buy(void);
void sell(void);
void hold(void);

int main(void) {

	int price;

	printf("Hello, welcome to your stock advisor for stock XYZ! Please enter current price: ");
	scanf("%d", &price);

	int priceChange = fluctuation(price);
	buyOrNot(priceChange);

	return EXIT_SUCCESS;
}

char fluctuation(int currentPrice) {

	char advice;

	if (currentPrice > SELL_PRICE_POINT) {
		advice = 's';
	}	else {
		if (currentPrice < BUY_PRICE_POINT) {
			advice = 'b';
		} else {
			advice = 'h';
		}
		
	}

	return advice;

}

void buyOrNot(char advice) {

	switch(advice) {
		// if price is positive, it has gone up, so sell (10 is arbitrary)
		case 's':
			sell();
			break;
		// if price is negative, it has gone down, so buy (10 is arbitrary)
		case 'b':
			buy();
			break;
		// if no change, hold
		case 'h':
			hold();
			break;
		default:
			printf("Something went wrong. Please try again.");
	}

}

void buy() {
	printf("Price has dropped below buy price point of %f. Buy!\n", BUY_PRICE_POINT);
}

void sell() {
	printf("Price has risen above sell price point of %f. Sell!\n", SELL_PRICE_POINT);
}

void hold() {
	printf("Price has remained stable. Hold!\n");
}