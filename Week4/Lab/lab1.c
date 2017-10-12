#include <stdio.h>

int main(int para){
	int digitsEncounterd[10] = {10,10,10,10,10,10,10,10,10,10};
	
	int digitsEntered;
	printf("Please enter your number : \n");
	scanf("%d",&digitsEntered);
	//if(para == 0){//backwards
	//printf("TESTO");
	while(digitsEntered > 0){
	
		int digit = digitsEntered % 10;
		if(digitsEncounterd[digit] == digit){
			printf("This number repeated : %d \n",digit);
			break;
		}else{
		printf("%d\n",digit);
		digitsEncounterd[digit] = digit;
		}
		digitsEntered /= 10;
	//}	
	}
	if(digitsEntered == 0)
		printf("No repeating numbers where found\n");

	return 0;
}
