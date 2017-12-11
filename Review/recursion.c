#include <stdio.h>
void selection_sort(int arrayo[],int n);
int main(){
	int amount,i;
	
	puts("Please input the amount of numbers your wish to sort");
	scanf("%d",&amount);
	int arrayo[amount];
	puts("Please enter your numners, entering space after every entry");
	for(i = 0;i < amount; i++){
		scanf("%d",&arrayo[i]);
	}
	
	selection_sort(arrayo,amount - 1);
	puts("This is your ordered list");
	for(int i = 0; i < amount; i++){
	
		printf("%d\n",arrayo[i]);
	}


	return 0;
}
void selection_sort(int arrayo[], int n ){//n is the index
	if(n > 0 ){
		int largest = arrayo[n];
		int indexToS = -1;
		for(int i = 0;i <= n ;i++){
			if(arrayo[i] > largest){
				largest = arrayo[i];
				indexToS = i;
			}
		}
		if(indexToS >= 0){
		int temp = arrayo[indexToS];
		arrayo[indexToS] = arrayo[n];
		arrayo[n] = temp;
		}
		selection_sort(arrayo, n - 1);
	}
}
