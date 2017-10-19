#include <stdio.h>
#include <stdlib.h>

int  selection_sort(int *arrayo,int length){
	if(length == 0)
		return 0;
	int lElement = arrayo[0];
	int candidate = 0;
	for(int i = 0;i < length;i++){
		if(lElement < arrayo[i]){
			lElement = arrayo[i];
			candidate = i;
		}
	}
	int tempo = arrayo[length-1];
	arrayo[(length-1)] = arrayo[candidate];
	arrayo[candidate] = tempo;

	selection_sort(arrayo,length-1);
	/*for(int j = 0;i<length;j++){
	int last lastIndexo = length-j;
	int candidate = -1;
	for(int i =0;i<lastIndexo;i++){
		if(lElement <  arrayo[i]){
			candidate = i;
		}
	}
	int tempo = arrayo[lastindexo];
	arrayo[lastindexo] = cadidate;
	arrayo[candidate] = tempo;

	}*/
	return 0;
}
int main(void){
	int numbo;
	printf("Please tell me the amount of numbers you wish to organize : \n");
	scanf("%d",&numbo);

	int arrato[numbo];
	//while(scanf("%d", &arrato[i++]) == 1);
	for(int i = 0; i < numbo;i++){
	scanf("%d",&arrato[i]);
	}
	printf("Your numbers : \n");
	//arrato = {0,1};
	selection_sort(arrato,numbo);
	for(int i = 0; i < numbo; i ++){
	printf("%d \n",arrato[i]);
	}

		
	
}
