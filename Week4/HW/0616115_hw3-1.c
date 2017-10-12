#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define M 27
#define firstIndex 97;
int main(void){

	char firstWord[16], secondWord[16];
	int appearancesLedger[M] = {0};

	printf("Please enter your word \n");
	scanf("%s", &firstWord);

	printf("Please enter your second word \n");
	scanf("%s",&secondWord);	
	int len = strlen(firstWord);
	int worldLength = strlen(firstWord);

	if(worldLength == strlen(secondWord)){
		//	int appearancesLedger[worldLength];
		//memset(appearancesLedger,0,worldLength*sizeof(int));
		for(int i = 0; i < worldLength;i++){
			int indexo = firstWord[i] - firstIndex;
			appearancesLedger[indexo] += 1;
			printf("Resulting value at indexo %d - %d \n",indexo,appearancesLedger[indexo]);
		
		}
		for(int i = 0; i < worldLength;i++){
			int indexo = secondWord[i] - firstIndex;
			
			printf("Goint through %d value : %d \n",indexo, appearancesLedger[indexo]);
			if(appearancesLedger[indexo] == 0){
				printf("This is not an anagram\n");
				return 0;
			}else{
				appearancesLedger[indexo] -= 1;
			}
		}
	
	}else{
	
	printf("Not anagrams \n Words dont even match in length\n");
	return 0;
	}
	for(int i =0;i < sizeof(appearancesLedger)/sizeof(int);i++){
		if(appearancesLedger[i] == 1){
			printf("This is an anagram \n");
			break;
		}
	}
	printf("This is an anagram \n");
	return 0;
}
