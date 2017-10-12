#include <stdio.h>

int main(void){

	//in these few lines we set our arrays, "numbers is the amount of numbers you wish to entry
	int numbers;
	//ask for values
	printf("How many numbers do you wish to compare \n");
	scanf("%d",&numbers);
	//we set the size of our array based on the amount of numbers our user wishes to compare
	int numbArray[numbers];
	
	//we loop times the amount of numbers the users wishes to compare in order to get every value in the array
	for(int i =0;i<numbers;++i){
		printf("Please enter the number in position %d : \n",i);
		scanf("%d",&numbArray[i]);
	}
	//wee do our bubble sort to get the values in order
	for(int i = 0; i<numbers;i++){
		for(int j = 0; j<(numbers-1);j++){
			if(numbArray[j] > numbArray[j+1]){
			int tempo = numbArray[j];
			numbArray[j]= numbArray[j+1];
			numbArray[j+1] = tempo;
			}
		}
	}
	//print the resulting organized array
	printf("This are your numbers in ascending order \n");
	for(int i = 0; i < numbers;i++){
		printf("%d\n",numbArray[i]);
	}
	
	return 0;
}
