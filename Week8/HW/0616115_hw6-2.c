#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_STR 100

char points[][10] = {"AEILNORSTU","DG","BCMP","FHVWY","K","JX","QZ"};
int main(void){
	char str[MAX_STR];
	int total_points = 0;
	printf("Please enter your word\n");
	char charo = '\0';	
	//printf("letter e %c \n",points[0][1]);

	while((charo = getchar()) != '\n'){
		charo = toupper(charo);
		printf("Letter : %c \n",charo);
		for(int i = 0; i < sizeof(points[0]);i++){
			for(int j = 0;j < strlen(points[i]);j++){
				if(charo == points[i][j]){
					int valuetoadd = 0;
					if(i == 5){
						valuetoadd = 8;
					}
					else if(i== 6){
						valuetoadd = 10;
					}else{
						valuetoadd = i+1;
					}

					total_points += valuetoadd;
				}
			}
		}
	}
	printf("This is your word's value %d \n",total_points);

}
