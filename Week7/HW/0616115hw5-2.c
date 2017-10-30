#include <stdio.h>


int main(void){
	//setting up our variables
	char str[100];
	int amount = 0;
	char ch;

	int indexo = 0;
	char *p = &str[0];

	//putting in array 
	while(1){
		*(p+indexo) = getchar();
		if(*(p+indexo) == '\n' || indexo == 100){	
			break;
		}else{
			//printf("This is it %i \n",str+indexo);
			indexo++;
		}
	}
	//printing 
	printf("This is your reverse");
	//we assign p as the last address of str, and we loop until we reach the intial address i.e. str
	for(p = (str+indexo); p  >= str;p--){
		printf("%c",*p);
	}
	printf("\n");



}
