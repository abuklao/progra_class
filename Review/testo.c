#include <stdio.h>
#include <string.h>

int main(void){
	

	char str[10] = "Holitas";
	char str1[10] = "Que";
	strcpy(&str[6], "Que");
	printf("%s\n",str);
	
	return 0;
}
