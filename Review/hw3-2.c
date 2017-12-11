#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
	
	char word1[100],word2[100];
	int ledger[27] = {0};
	puts("Please enter your fisrw word");
	scanf("%s",&word1);
	
	puts("Please enter your second word");
	scanf("%s",&word2);
	int i = 0;
	for(i; i < strlen(word1);i++){
		if(isalpha(word1[i])){
		int numval = toupper(word1[i]) - 65;
		printf("Adding numval %d\n",numval);
		ledger[numval] += 1;
		}
	}
	i = 0;
	for(i; i < strlen(word2);i++){
		if(isalpha(word2[i])){
		int numval = toupper(word2[i]) - 65;
		printf("Subtracting numval %d\n",numval);
		ledger[numval] -= 1;
		}
	}
	i = 0;
	for(i; i<27;i++){
		printf("Value at %d : %d \n",i,ledger[i]);
		if(ledger[i] != 0){
			puts("Not anagrams");
			return 0;
		}
	}
	puts("It is indeed...an anagram");
	return 0;
}
