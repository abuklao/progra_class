#include <stdio.h>

int main(){
	int numero = 0;
	printf("Please enter a two-difit number\n");
	scanf("%d",&numero);
	
	int firstdigit = numero / 10;
	int seconddigit = numero % 10;
	printf("First digit : %d\n",firstdigit);
	printf("Second digit : %d\n",seconddigit);
	return 0;
}
