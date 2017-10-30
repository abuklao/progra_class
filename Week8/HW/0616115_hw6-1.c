#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc,char *argv[]){
	int total = 0;
	char *ptr;
	printf("This is your total\n");
	//pretty simple
	//we get the values form parameters
	//we loop through the array
	//and add them to the total
	for(int i = 1;i< argc;i++){
		total += strtol(argv[i],&ptr,10);
	}
	printf("Total : %d \n",total);
}
