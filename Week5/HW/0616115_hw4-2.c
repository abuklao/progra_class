#include <stdio.h>
#define MAX_DIGITS 10
#define COLUMN_N 4
#define ROW_N 3

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);
int segmentsA[10][7] = {{1,1,1,1,1,1,0},{0,1,1,0,0,0,0},{1,1,0,1,1,0,1},{1,1,1,1,0,0,1},{0,1,1,0,0,1,1},{1,0,1,1,0,1,1},{1,0,1,1,1,1,1},{1,1,1,0,0,0,0},{1,1,1,1,1,1,1},{1,1,1,0,0,1,1}};
char digitsArray[ROW_N][MAX_DIGITS*COLUMN_N];
//the negative number acts as a null
int correspondence[3][4] = {{-1,-1,0,-1},{-1,5,6,1},{-1,4,3,2}};
int main(void){
	int numberToEnter;
	int amountOfDigits= 0;
	char str[100];

	printf("Please enter the number you wish to display \n");
	scanf("%d %*s",&numberToEnter);
	printf("Resulting inputed number : %d",numberToEnter);
	int number = numberToEnter;
	while(number != 0){
		amountOfDigits++;
		number /= 10;
	}
	if(amountOfDigits > MAX_DIGITS)
		return 0;
	int numberArray[amountOfDigits];
	for(int i=0;i < amountOfDigits;i++){
		numberArray[amountOfDigits-i-1] = numberToEnter % 10;
		numberToEnter /= 10;
	}
	printf("\nYour numbers \n");	
	for(int i=0;i < amountOfDigits;i++){
		printf("%d",numberArray[i]);
	}

	clear_digits_array();
	for(int i = 0;i<amountOfDigits;i++){
		process_digit(numberArray[i],i);
	}
	print_digits_array();
	return 0;
}
void clear_digits_array(){
	
	for(int i = 0;i < ROW_N; i++){
		for(int j = 0;j < (COLUMN_N*MAX_DIGITS);j++){
			digitsArray[i][j] = ' ';
		}
	}
}
void process_digit(int digit, int pos){
	

	for(int col_pos = 0; col_pos < COLUMN_N;col_pos++){
		int actual_c_pos = col_pos + (pos*COLUMN_N);
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
