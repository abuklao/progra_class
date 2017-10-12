#include <stdio.h>

int main(void){
	/* declaring variables
	 * amount is for input
	 * tw, te, fi, on is for the number of TWenty. TEn, FIve, ONe bills
	 */
	int amount;
	int tw,te,fi,on;
	//printing request and asking for into
	printf("Please enter your amount \n");
	scanf("%d",&amount);
	
	//we divide the amount given to find the amount of dollar bills
	//we then subtract the remiainder to the total amount to continue with the lower amounts;
	
	tw = amount / 20;
	amount %= 20;
	te = amount / 10;
	amount %= 10;
	fi = amount / 5;
	amount %= 5;
	on = amount;

	//printing result
	printf("20 bills : %d \n"
		"10 bills : %d \n"
		"5 bills : %d \n"
		"1 bills : %d \n", tw,te,fi,on);
	return 0;
}
