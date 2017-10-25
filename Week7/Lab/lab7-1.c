#include <stdio.h>
void pay_amount(int dollars, int *twenties, int *tens,int *fives, int*ones);
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
	
	pay_amount(amount,&tw,&te,&fi,&on);
	printf("20 bills : %d \n"
		"10 bills : %d \n"
		"5 bills : %d \n"
		"1 bills : %d \n", tw,te,fi,on);

	return 0;
}
void pay_amount(int dollars, int *twenties, int *tens,int *fives, int *ones){
	
	
	//we divide the amount given to find the amount of dollar bills
	//we then subtract the remiainder to the total amount to continue with the lower amounts;
	
	*twenties = dollars / 20;
	dollars -= *twenties* 20;
	*tens = dollars / 10;
	dollars -= *tens * 10;
	*fives = dollars / 5;
	dollars -= *fives * 5;
	*ones = dollars;
	

}
