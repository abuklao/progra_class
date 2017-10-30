#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX_DIGITS 10
#define COLUMN_N 4
#define ROW_N 3


//functions prototypes
//clean input string makes sure we only take numbers
//clear digits array prepares the long array for when we want to print our numbers
//process digits array receives a number and puts it into digitsArray to alter be printed
//print digits array...well ptrints the digits
void clean_inp_string(char *s,int *numerosArray,int *amountOfDigits);
void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

//arrays to be used 
////segment array is used for storing the structure of the digits when printed in a 4x3 array
int segmentsA[10][7] = {{1,1,1,1,1,1,0},{0,1,1,0,0,0,0},{1,1,0,1,1,0,1},{1,1,1,1,0,0,1},{0,1,1,0,0,1,1},{1,0,1,1,0,1,1},{1,0,1,1,1,1,1},{1,1,1,0,0,0,0},{1,1,1,1,1,1,1},{1,1,1,0,0,1,1}};
//digits arrat 
//this is the array to be printed as result
char digitsArray[ROW_N][MAX_DIGITS*COLUMN_N];
//this is a 4x3 array that helps us related the values on a the array to print and the actual position of each digit 
//the negative number acts as a null
int correspondence[3][4] = {{-1,-1,0,-1},{-1,5,6,1},{-1,4,3,2}};

//main function
int main(void){
	//big str just in case
	//ammount of digits is used to loop through the array of numbers
	char str[100];
	int amountOfDigits = 0;
	//aray of numbers
	int numberArray[MAX_DIGITS];
	
	//asking for values
	printf("Please enter your number : \n");
	scanf("%s",str);
	printf("This is your string %s \n", str);
	
	//we take the fiven string and take ONLY DIGIT values verything else is ignored
	clean_inp_string(str,numberArray,&amountOfDigits);
	
	//we prepare the array before putting in the numbers
	clear_digits_array();
	//we loop through the array of numbers and then process them in process_digit that puts it in the array to print
	for(int i = 0;i<amountOfDigits;i++){
		process_digit(numberArray[i],i);
	}
	//we print the array
	print_digits_array();

	return 0;
}
void clean_inp_string(char *s,int *numeroArr,int *amountOfDigits){
	int amountD=0;
	//we loop through every character of the inputed string
	for(int i = 0; i < strlen(s);){
		//if we loop through a digit and we still have space to spare in our array then we add it to our array
		if(isdigit(*(s+i)) || amountD >= MAX_DIGITS){
			//we conver the character that is integer into an actual integer type
			int ledigit = *(s+i) - '0';
			//we put it into our number array
			*(numeroArr+amountD)= ledigit;	
			
			//add to the amount of integers
			amountD += 1;
		}

		//keep looping through characters
		i++;

	}
	//this is just for safety
	//in case the above loop mistakenly adds one extra case
	if(amountD >= MAX_DIGITS)
		amountD = MAX_DIGITS;
	*amountOfDigits = amountD;


}
void clear_digits_array(){
//we prpetty much loop through the columns and array filling them with blank space.
	for(int i = 0;i < ROW_N; i++){
		for(int j = 0;j < (COLUMN_N*MAX_DIGITS);j++){
			digitsArray[i][j] = ' ';
		}
	}
}
void process_digit(int digit, int pos){
//we loop through every column on the given position.(every position contains four columns
	for(int col_pos = 0; col_pos < COLUMN_N;col_pos++){
		//we calculate the precise spot of the column
		int actual_c_pos = col_pos + (pos*COLUMN_N);
		//we take the position of the row and determine if we can print something, if so, is it a underscore or a vertical line ?
		for(int row_pos = 0;row_pos < ROW_N;ROW_N,row_pos++){

			char toPrint = ' ';
			if(col_pos == 1 || col_pos == (COLUMN_N-1)){	
				//we print |
				toPrint = '|';
			} 
			else if(col_pos == 2){
				//we print underscore _
				toPrint = '_';
			}
			int segment_index = correspondence[row_pos][col_pos];
			if(segment_index != -1){
				int bool_filled = segmentsA[digit][segment_index];
				if(bool_filled == 1){
					//printf("Digit: %d - Correspondence: %d -  Row:%d Col:%d \n",digit,correspondence[row_pos][col_pos],row_pos,col_pos);
					digitsArray[row_pos][actual_c_pos] = toPrint;

				}
			}
		}
	}
}
//pretty straight forward. we print everything
void print_digits_array(){
	printf("\n");
	for(int r = 0; r < ROW_N ;r++){
		//printf("\n");
		for(int c = 0;c < (MAX_DIGITS * COLUMN_N);c++){
			char toPrint = digitsArray[r][c];
			printf("%c",toPrint);
		}
		printf("\n");
	}
}
