#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LAMOUNT 26
/*functions prototypes*/
void getMessage(char *arrayto, char filename[]);
void encryto(char arrayto[], int samount);
int writeToFile(const char arrayto[],char filename[]);
int main(){
	char arrayto[80];/*we can assume it has at most 80 characters right ?*/
	char filename[100];
	int samount = 0;
	/*pretty much just gathering information here*/
	puts("Enter name of a file to be encrypted:");
	scanf("%s",filename);
	getMessage(arrayto,filename);
	puts("Enter shift amount");
	scanf("%d",&samount);
	
	/*making sure about the shift is within reason*/
	if(!(samount>=1 && samount <= 25)){
		puts("Shift amount is too high\nExiting program...");
		return 0;
	}
	/*we take the array and encrypt it through this function */
	encryto(arrayto,samount);
	/*if the write to file was succesfuly done then we let the user know */
	if(writeToFile(arrayto,filename))
		printf("File encryted succesfuly to : %s\n",filename);
			else
				printf("I am sorry I dont have an encrypted output file for you \n");

	return 0;
}
/*this function is used to open the file and check for the message to be encrypted*/
void getMessage(char *arrayto,char filename[]){
	/*hmm we leave space here to get message from file*/
	FILE *filo = fopen(filename,"r");

	char charo = '\0';
	/*when we find a new line we stop gathering characters for the message to be encrypted*/
	while((charo = fgetc((FILE*)filo)) != '\n'){
		*(arrayto++) = charo;
	}
	*arrayto = '\0';


}
void encryto(char arrayto[], int samount){
	int i = 0;
	/*int topLower = 'z',topUpper ='Z'; we dont use this :p*/
	for(;i < strlen(arrayto);i++){
			if(arrayto[i] >= 'a' && arrayto[i] <= 'z'){
				/*we use the expression given in the assignement instructions to shift properly*/
				arrayto[i] = ((arrayto[i]-'a')+samount)%26+'a';
			}else if(arrayto[i] >= 'A' && arrayto[i] <= 'Z'){
				arrayto[i] = ((arrayto[i]-'A')+samount)%26+'A';
			}
	}

}
/*open file and if success opened and written then we return 1*/
int writeToFile(const char arrayto[],char filename[]){
	int success = 0;
	FILE *filo = fopen(strcat(filename,".enc"),"w");

	if(fputs(arrayto,filo))
		success = 1;
	fclose(filo);
	return success;
}
