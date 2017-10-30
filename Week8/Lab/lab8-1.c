#include <stdio.h>
#include <string.h>
void reverse(char *message);
int main(void){
	char str[100];
	int amount = 0;
	char ch;

	int indexo = 0;
	char *p = &str[0];

	//putting in array
	printf("Please feed me that string \n");
	while(1){
		*(p+indexo) = getchar();
		if(*(p+indexo) == '\n' || indexo == 100){
			*(p+indexo) = '\0';
			break;
		}else{
			//printf("This is it %i \n",str+indexo);
			indexo++;
		}
	}

	reverse(str);
	printf("This is your reversed string : %s\n",str);


}
void reverse(char *message){
	char *f,*l;
	f = message;
	l = message+(strlen(message)-1);

	while(f <= l){
		char tempo = *f;
		*f = *l;
		*l = tempo;

		f++;
		l--;
	}
}
