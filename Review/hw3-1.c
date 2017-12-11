#include <stdio.h>
void bubblesort(int *t,int amount);
int main(void){
	int amount,i = 0;
	int *p;
	puts("How many numbers do you wish to order?");
	scanf("%d",&amount);
	
	int arrayto[amount];
	puts("Please enter your numbers one by one and press enter afterwards");
	for(i;i < amount;i++){
		scanf("%d",&arrayto[i]);
	}

	bubblesort(arrayto,amount);
	p = arrayto;
	puts("Your ordered array : \n");
	for(p;p < (arrayto + amount);p++){
		printf("%d\n",*p);
	}
	

	return 0;
}
void bubblesort(int *t,int amount){
	int i = 1,j = 0;
	for(i;i<amount;i++){
		puts("in the loop");
		j = 0;
		for(j;j<amount-1;j++){
			if(t[j] > t[j+1]){
				printf("Swapping %d for %d \n",t[j],t[j+1]);
				int tempo = t[j+1];
				t[j+1] = t[j];
				t[j] = tempo;
			}
		
		}
	}
}
