#include <stdio.h>
void reduce(int numerator, int denominator, int *r_num,int *r_denum);
int main(int argc, char argv[]){
	int num,denum,r_num,r_denum;
	puts("Please write down your num denom as follows num/denom");
	scanf("%d/%d",&num, &denum);

	reduce(num,denum,&r_num,&r_denum);
	
	printf("This is the reduced one %d/%d \n",r_num,r_denum);
}
void reduce(int numerator, int denominator, int *r_num, int *r_denum){
	int common = 0;
	if(numerator> denominator){
		common = denominator;
	}else{
		common = numerator;
	}
	while(((denominator % common) != 0) || ((numerator % common) != 0))
		common--;

	*r_num = numerator/common;
	*r_denum = denominator/common;

}
