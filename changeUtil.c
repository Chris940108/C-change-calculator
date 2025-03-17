#include <stdio.h>
#include "changeUtil.h"

void calcChange(double moneyOwed, double moneyPaid, double change){
	
	
	
	
	int total = (moneyPaid * 100) - (moneyOwed * 100);
	
	int dollar = total / 100;
	total %= 100;
	int quarters = total / 25; 
	total %= 25;
	int dimes = total / 10;
	total %= 10;
	int nickles = total / 5;
	total %= 5;
	int pennies = total;
	
	printf("\nChange due: %.2f", change);
	printf("\nDollars %d", dollar);
	printf("\nQuarters %d", quarters);
	printf("\nDimes %d", dimes);
	printf("\nNickles %d", nickles);
	printf("\nPennies %d", pennies);
	
	
}