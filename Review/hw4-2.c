#include <stdio.h>
#include <ctype.h>
#define MAX_DIGITS 10
#define R_NUM 3
#define C_NUM 4
void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

/*Arrays */

int segment_a[10][3][4] = {{{0,0,1,0},{0,1,0,1},{0,1,1,1}},{{0,0,0,0},{0,0,0,1},{0,0,0,1}},{{0,0,1,0},{0,0,1,1},{0,1,1,0}},{{0,0,1,0},{0,0,1,1},{0,0,1,1}},{{0,0,0,0},{0,1,1,1},{0,0,0,1}},{{0,0,1,0},{0,1,1,0},{0,0,1,1}},{{0,0,1,0},{0,1,1,0},{0,1,1,1}},{{0,0,1,0},{0,0,0,1},{0,0,0,1}},{{0,0,1,0},{0,1,1,1},{0,1,1,1}},{{0,0,1,0},{0,1,1,1},{0,0,0,1}}};
char digits_array[R_NUM][C_NUM * MAX_DIGITS] = {{0}};

int main(void){
	

	clear_digits_array();
	int digit_count = 0;
	char charo;
	puts("This are your digits");
	while((charo = getchar()) != '\n' && digit_count <= MAX_DIGITS){
		if(isdigit(charo)){
			
			int digit = charo - '0';
			printf("Digit : %d \n", digit);
			process_digit(digit,digit_count);

		digit_count++;
		}
	}
	print_digits_array();
	return 0;

}
void process_digit(int digit, int position){
	int i =0;
	for(i;i < R_NUM;i++){
		int j = 0;
		for(j; j < C_NUM;j++){
	
			int rC =  (position * 4) + j; 
			if(j == 0){
				digits_array[i][rC] = ' ';
			}else if(j  == 1 || j == 3 ){
				if(segment_a[digit][i][j] == 1)
					digits_array[i][rC] = '|';
			}else if(j == 2){
				if(segment_a[digit][i][j] == 1)
					digits_array[i][rC] ='_';
			}
		}
	}
}
void clear_digits_array(void){
	int i,j;

	for(i=0;i< R_NUM;i++){
		for(j = 0; j < C_NUM * MAX_DIGITS;j++){
			digits_array[i][j] = ' ';
		}
	}
}
void print_digits_array(void){
	
	int i,j;
	
	for(i=0;i< R_NUM;i++){
		for(j = 0; j < C_NUM * MAX_DIGITS;j++){
			printf("%c",digits_array[i][j]);
		}
		printf("\n");
	}
}



