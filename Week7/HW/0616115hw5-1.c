#include <stdio.h>
void reduce(int numerator, int denominator,int * reduce_numerator, int * reduce_denominator);
int main(void){

	int num1,num2,reduce_numerator,reduce_denominator;

	printf("Please enter both of your numbers : \n");
	scanf("%d/%d",&num1,&num2);
	reduce(num1,num2,&reduce_numerator,&reduce_denominator);

	printf("This is your number : %d/%d\n",reduce_numerator,reduce_denominator);

}
void reduce(int numerator, int denominator,int * reduce_numerator, int * reduce_denominator){
	int cmd;

	for(int i =1; (i <= numerator) && (i <= denominator) ; ++i){
		if(numerator%i==0 && denominator%i ==0)
			cmd = i;
	}
	numerator /= cmd;
	denominator /= cmd;

	*reduce_numerator  = numerator;
	*reduce_denominator = denominator;
	
}
