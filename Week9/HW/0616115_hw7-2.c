#include <stdio.h>

//FUNCTION PROTOTYPES
void readNums(int nums[][], char filename[]);
int main(){
	char filename[100];
	int nums[10][3];
	puts("Please tell me your filename");
	scanf("%s",filename);

	readNums(nums, filename);

	return 0;
}
int readNums(int nums[][], char filename[]){
	
	FILE *filo = fopen(filename,"r");
	char charo = '\0';
	while((charo = fgetc(filename)) != EOF){
		
	}

}
