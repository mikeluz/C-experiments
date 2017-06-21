/*
 ============================================================================
 Name        : 07_06.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Solution to challenge 07_05
 ============================================================================
 */

// to run this program, you must use command: cc 07_06.c transactions.c
// that is -- you must compile the main as well as the .c library -- including the .h file in main as here LINKS them

#include "transactions.h"

int main(void) {
	initializeAccount();
	getBalance();
	//Perform first transaction
	askCustomer();
	updateAccount(amount);
	getBalance();
	//Perform second transaction
	askCustomer();
	updateAccount(amount);
	addGift(5.0);
	getBalance();
	//Perform third transaction
	askCustomer();
	updateAccount(amount);
	addGift(2.0);
	getBalance();
	thankYou();
	return EXIT_SUCCESS;
}
