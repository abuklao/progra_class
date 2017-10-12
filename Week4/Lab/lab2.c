#include <stdio.h>

int main(void){
	int arrayto[5][5],resultos[2][5];
	//getting the numbers one by one
	for(int i = 0;i < sizeof(arrayto)/sizeof(arrayto[0]);i++){
		for(int s = 0;s<sizeof(arrayto[i])/sizeof(int);s++){
			printf("Please Input The value for Row %d Column %d\n",i,s);
			scanf("%d",&arrayto[i][s]);
			resultos[0][i] += arrayto[i][s];
			resultos[1][s] += arrayto[i][s];
		}

	}
	//printing formated array
	printf("This should be a representation of your matrix: \n");
	for(int i = 0;i < sizeof(arrayto)/sizeof(arrayto[0]);i++){
		for(int s = 0;s<sizeof(arrayto[i])/sizeof(int);s++){
		printf(" %d ",arrayto[i][s]);
		}
		printf("\n");
	}
	//printing results
	for(int i = 0;i<sizeof(resultos)/sizeof(resultos[0]);i++){

		if(i ==0){
		printf("Rows : ");
		}else{
		printf("Columns : ");
		}
		for(int s = 0; s < sizeof(resultos[i])/sizeof(int); s++){
			printf("%3d",resultos[i][s]);
		}
		printf("\n");
	}
	//printf("Rows : %-3d %-3d %-3d %-3d %-3d \n", resultos[0][0],resultos[0][1],resultos[0][2],resultos[0][3],resultos[0][4]);
	//printf("Columns %-3d %-3d %-3d %-3d %-3d \n", resultos[1][0],resultos[1][1],resultos[1][2],resultos[1][3],resultos[1][4]);
	return 0;
}
