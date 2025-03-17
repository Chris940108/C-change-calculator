#include <stdio.h>
#include <stdbool.h> 
#include "changeUtil.h"

//Christian Giovanni Martinez
//Id 991770196
//Date 03/02/2025

//Assignment 1


int main(){
	
	double moneyOwed;
	double moneyPaid;
	double change;
	
	printf("Enter money owed: ");
	
	while (true){
		int parseCount = scanf("%lf", &moneyOwed);
		if (parseCount == 1 && moneyOwed > 0) {
			break;
		}
		printf("Enter a numeric value greater than 0: ");
		fflush(stdin);		
	}
	
	printf("Enter money paid: ");
	while (true) {
		int parseCount = scanf("%lf", &moneyPaid);
		if (parseCount == 1 && moneyPaid > 0) {
			if (moneyPaid >= moneyOwed){
				break;
			}
			printf("Value paid must be greater than money owed: ");
			continue;
					}
		printf("Enter a numeric value greater than 0: ");
		fflush(stdin);		
	}
	change = moneyPaid - moneyOwed;
	
	calcChange(moneyOwed, moneyPaid, change);
	
	
	
}