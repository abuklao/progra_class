#include <stdio.h>
char *dates[] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
int main(void){
	int m,d,y;
	printf("Please enter your date in the following format mm/dd/yyyy\n");
	scanf("%d/%d/%d",&m,&d,&y);
	printf("You entered the date %s %d, %d \n",*(dates + m - 1),d,y);
}
