#include <stdio.h>
#define MAX_L_SIZE 128

//FUNCTION PROTOTYPES
int readNums(int nums[][3], char filename[]);
int main(){
	char filename[100];
	int nums[10][3];
	puts("Please tell me your filename");
	scanf("%s",filename);

	readNums(nums, filename);

	for(int i = 0; i < 10;i++){
		
		printf("This are your numbers (%d)%d-%d \n",nums[i][0],nums[i][1],nums[i][2]);
		printf("\n");
	
	}

	return 0;
}
int readNums(int nums[][3], char filename[]){
	
	FILE *filo = fopen(filename,"r");
	char p[MAX_L_SIZE];

	while((fgets(p, MAX_L_SIZE,filo)) && r <= 10){
		for(int i  = 0; i < strlen(p); i++){
			if(isdigit(p[i])){
				switch(charcount){
					case(3):
						
						break;
					case(6):

						break;

					case(10):

						break;
				}
				charcount++;
			}
		}
		charcount = 0;
	}
	fclose(filo);

}
unsigned concatenate(unsigned x, unsigned y){
	unsigned power= 10;
	while(y >= power)
		power *=  10;
	return x * power + y;
	
}
