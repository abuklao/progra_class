#include <stdio.h>

int main(void){
	
	int dateOne[3],dateTwo[3]; 

	printf("Enter first date (mm/dd/yy): \n");
	scanf("%d/%d/%d",&dateOne[1],&dateOne[2],&dateOne[0]);
	printf("This is your first date isnt it ? : %d/%d/%d \n\n",dateOne[1],dateOne[2],dateOne[0]);
	printf("Please enter second date (mm/dd/yy): \n");
	scanf("%d/%d/%d",&dateTwo[1],&dateTwo[2],&dateTwo[0]);
	printf("This is your second date isnt it ? : %d/%d/%d \n\n",dateTwo[1],dateTwo[2],dateTwo[0]);

	for(int i = 0; i < sizeof(dateOne)/sizeof(int); ++i){
		if(dateOne[i] <  dateTwo[i]){
			printf("%d/%d/%d Is earlier\n",dateOne[1],dateOne[2],dateOne[0]);
			break;
		}else if(dateTwo[i] < dateOne[i]){
			printf("%d/%d/%d Is earlier\n",dateTwo[1],dateTwo[2],dateTwo[0]);
			break;
		}else if(dateOne[i] == dateTwo[i]){
			if(i == 2){
				printf("Dates are the same");
			}
		}
	}
	return 0;
}
