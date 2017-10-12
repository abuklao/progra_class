#include <stdio.h>

int main(void){
	//setting up the three different numer variables
	int telephonein,telephonesecond,telephonethird;
	//requesting format
	printf("Please enter your telephone number in the following format (xxx) xxx-xxxx \n");
	//inputting number	
	scanf("(%d)%d-%d",&telephonein,&telephonesecond,&telephonethird);
	//outputing number in desired format
	printf("You have entered : %d.%d.%d \n",telephonein,telephonesecond,telephonethird);

	return 0;
} 
