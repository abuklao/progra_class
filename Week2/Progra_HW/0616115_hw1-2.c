#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//this is all a rough code, just testing some waters :3
//stating function
char *concat(int inputo,int bool_unlock);
int main(int bool_unlock){

	//Declaring Variables
	int decimalInput;
	int octalOutput;

	//Asking for decimal Value
	printf("Please enter your base 10 decimalInput : ");
	scanf("%d",&decimalInput);
	//Printing value but through function
	printf("\nYour requested octal number is : %s \n", concat(decimalInput,bool_unlock));

	return 0;
}
//function that returns the base 8 value
char * concat(int inputo,int bool_unlock){
	//allocating memory so we can return this value
	char *returnC = (char *) malloc(sizeof(char)*5);
	//testing for size set on the requirements of the hw
	if(inputo >= 0 && inputo <= 32767){
		//array of int that will be returned
		int resulto[5];
		//index that will help loop through the following for loop
		int indexo = (sizeof(resulto)/sizeof(int) - 1);
		//we loop though every integer
		for(indexo;indexo >= 0; --indexo){
			//we take the remainder first and store to later divide the inputo by eight and continuing with the loop
			resulto[indexo] = inputo % 8;
			inputo /= 8;

		}

		//concatanating every single digit
		sprintf(returnC,"%d%d%d%d%d",resulto[0],resulto[1],resulto[2],resulto[3],resulto[4]);
	}else{
		//returns this string if the number given is too big
		returnC = "ToBig";
	}
	return returnC;

}
