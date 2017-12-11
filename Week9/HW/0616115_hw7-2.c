#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*just for safety we set a limit to the amount of words we will loop through*/
#define MAX_L_SIZE 128

/*FUNCTION PROTOTYPES
Declaring the function before usage*/
int readNums(char filename[]);
int main(){
	/*We ask for the filename */
	char filename[100];
	puts("Please tell me your filename");
	scanf("%s",filename);

	puts("These are your formatted numbers:");
	readNums(filename);


	return 0;
}
/*this function will read the filename and go line by line finding numbers and changing their formats*/
int readNums(char filename[]){
	/*opening file*/
	FILE *filo = fopen(filename,"r");
	char a[MAX_L_SIZE];

	/*in every whhile loop we obtain a line and loop through its characters*/
	while(fgets(a, MAX_L_SIZE,filo)){/*looping through every line */
		char *p = a;/*to loop through characters*/
		int numcounter = 0;/*keeps track of the amount of numbers we have encountered*/
		/*looping through characters of line*/
		while(*p != '\n' && numcounter <=10){
			/*we check if the character we are holding is a digit or not*/
			if(isdigit(*p)){
				/*if it is a digit then we check the position it is in, and determine wether we should print a a special character according to the requested format or not.*/
				++numcounter;
				if(numcounter == 1)
					printf("(");
				else if(numcounter == 7)
					printf("-");
				printf("%c",*p);
				if(numcounter == 3)
					printf(")");
			}
			
			p++;
		}
		/*new line so it can look decent and readable*/
		printf("\n");
	}
	/*close file*/
	fclose(filo);

}
