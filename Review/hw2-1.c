#include <stdio.h>

int main(){

	int numero   = 0;
	printf("Please enter you rnumber : \n");
	scanf("%d",&numero);
	if(numero % 2 ==0){
	printf("It is even ");
	}else{
		printf("It is odd");
	}

	return 0;
}
