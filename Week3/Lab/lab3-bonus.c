#include <stdio.h>

int main(void){
	
	int n;
	float resulto = 0.0f;

	printf("Input number : \n");
	scanf("%d",&n);
	for(int i  = 0;i<n;i++){
		float factorial = 1.0f;
		printf("Factorial PRe : %d \n",factorial);
		for(int s = 1; s <= i ; s++){
			printf("S value : %d \n",s);
			printf("Factorial inside : %d\n",factorial);
			if(s != 0)
			factorial *= s;

		}

		printf("Testo : %d \n\n",factorial);
		if(factorial != 0)	
		resulto += 1/factorial;
		
	}
	printf("\n Your result is : %f \n",resulto);
	return 0;
}
