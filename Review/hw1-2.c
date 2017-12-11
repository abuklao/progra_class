#include <stdio.h>

int main(){

	int base10num;
	int counti=0;
	printf("Please enter your number\n");
	scanf("%d",&base10num);
	if(base10num <= 0 && base10num >= 32767)
		return 0;
	printf("Your octal numbear is : \n");
	
	int dividier = 8000;
	while(base10num >=10){
		printf("%d",base10num / dividier);
		base10num %= dividier;
		dividier /= 10;
	}
	/*for(in j = 1;j < 
	for(int i= 0;i < 5;i++){
		if(base10num >=10){
		printf("%d",base10num /8);
		base10num %= 8;
		}	
	}*/
	
	printf("%d\n",base10num);
}
