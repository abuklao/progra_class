#include <stdio.h>
void reduce(int numerator, int denominator,int * reduce_numerator, int * reduce_denominator);
int main(void){
	//we state our variables
	int num1,num2,reduce_numerator,reduce_denominator;
	
	//we ask the values for the initial numerator and denominator
	printf("Please enter both of your numbers : \n");
	scanf("%d/%d",&num1,&num2);
	//we run the function reduce
	reduce(num1,num2,&reduce_numerator,&reduce_denominator);
	
	printf("This is your number : %d/%d\n",reduce_numerator,reduce_denominator);

}

void reduce(int numerator, int denominator,int * reduce_numerator, int * reduce_denominator){
	//greatest common factor
	int cmd;

	for(int i =1; (i <= numerator) && (i <= denominator) ; ++i){
		//we go up through numbers until we find one that can divide both numbers without remainders
		//thus that would be our GCF
		if(numerator%i==0 && denominator%i ==0)
			cmd = i;
	}
	
}
