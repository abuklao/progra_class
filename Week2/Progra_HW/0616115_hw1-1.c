#include <stdio.h>

int main(void){
	//defining some variables
	int tdNumber;
	
	//asking for value for variable
	printf("Enter a two-digit number: \n");
	scanf("%d", &tdNumber);

	//checking validity of number provided
	if(tdNumber >= 0 && tdNumber < 100){

	//twisting digits
	int lastDigit = tdNumber%10;
	int firstDigit = tdNumber/10;
	
	//Outputting reversed digits
	printf("The reversal is:  %d%d \n",lastDigit,firstDigit);
	}else{
	//Output if the number is too big
	printf("\nInput is not a 2 digit number, please write a number small than 100 \n");
	}
	return 0;
}
