#include <stdio.h>

int main(){
	//initializing variable
	int testo = 0;
	while(1){//while loop so we can keep inputting numbers
	//asking for a new number and storing it in testo;
	printf("Please input your number :\n ");
	scanf("%d",&testo);
	
	//we get the remainder
	testo %= 2;
	//if the remainder is 0 then the number is even otherwise it's odd
	if(testo == 0){
		printf("Even \n");
	}else{
		printf("Odd \n");
	}
	}
	return 0;
	
}
