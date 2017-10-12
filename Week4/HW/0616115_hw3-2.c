#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define M 27
//fist index is just the ascii index of "a" that way we know where to start in an array
#define firstIndex 97;
int main(void){
	
	//char array that stores the words
	char firstWord[16], secondWord[16];
	//simply stores the words in a alphabetical order
	int appearancesLedger[M] = {0};
	
	//asking for input
	printf("Please enter your word \n");
	scanf("%s", &firstWord);

	printf("Please enter your second word \n");
	scanf("%s",&secondWord);

	//getting word length
	int worldLength = strlen(firstWord);
	//we test lengths of both words to be equal. if they are we treat wordLength not as the length of the first word but of both
	if(worldLength == strlen(secondWord)){
		//	int appearancesLedger[worldLength];
		//memset(appearancesLedger,0,worldLength*sizeof(int));
		//we store every letter taht appears in alphabetical orders and add 1 by every encounter of every letter
		for(int i = 0; i < worldLength;i++){
			int indexo = firstWord[i] - firstIndex;
			appearancesLedger[indexo] += 1;
			//debug
			//printf("Resulting value at indexo %d - %d \n",indexo,appearancesLedger[indexo]);
		
		}
		//we then do the opposite of what we did in the previous loop. we subctract 1 for every appearnce of every letter
		for(int i = 0; i < worldLength;i++){
			int indexo = secondWord[i] - firstIndex;
			//debug
			//printf("Goint through %d value : %d \n",indexo, appearancesLedger[indexo]);
			//if we ever encounter 0 values in indexo then that means this letter was not previously seen before therefor not an anagram
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
	//last check to see if its indeed an anagram
	for(int i =0;i < sizeof(appearancesLedger)/sizeof(int);i++){
		if(appearancesLedger[i] == 1){
			printf("This is an anagram \n");
			break;
		}
	}
	printf("This is an anagram \n");
	return 0;
}
