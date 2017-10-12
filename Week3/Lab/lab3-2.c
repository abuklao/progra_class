#include <stdio.h>

int main(){
	int num,broken[2];
	char *result,*result2 = " ";

	printf("Please give me a two digit number : \n");
	scanf("%d",&num);

	if(num < 10 || num >= 100){
		printf("Your number is either too low or high \n");

	}else{
		broken[0] = num/10;
		broken[1] = num%10;


		if(num >= 11 && num <= 19){
			switch(num){
				case 11:
					result = "Eleven";
					break;

				case 12:
					result = "Twelve";
					break;

				case 13:
					result = "Thirteen";
					break;

				case 14:
					result = "Fourteen";
					break;

				case 15:
					result = "Fifteen";
					break;
				case 16:
					result = "Sixteen";
					break;
				case 17:
					result = "Seventeen";
					break;
				case 18:
					result = "Eighteen";
					break;

				case 19:
					result = "Nineteen";
					break;
			}

		}
		else{

			switch(broken[0]){
				case 1:
					result = "Ten";
					break;
				case 2:
					result = "Twenty";
					break;
				case 3:
					result = "Thirty";
					break;
				case 4:
					result = "Forty";
					break;
				case 5: 
					result = "Fifty";
					break;
				case 6:
					result = "Sixty";
					break;
				case 7:
					result ="Seventy";
					break;
				case 8:
					result = "Eighty";
					break;
				case 9:
					result = "Ninety";
					break;
			}
			switch(broken[1]){
				case 1:
					result2 = "One";
					break;
				case 2:
					result2 = "Two";
					break;
				case 3:
					result2 = "Three";
					break;
				case 4:
					result2 = "Four";
					break;
				case 5:
					result2 = "Five";
					break;
				case 6:
					result2 = "Six";
					break;
				case 7:
					result2 = "Seven";
					break;
				case 8:
					result2 = "Eight";
					break;
				case 9:
					result2 = "Nine";
					break;
			}
			/*for(int i = 0; i < sizeof(broken)/sizeof(int);++i){
			  switch (num){

			  }
			  }*/
		}
		if(broken[1] > 0 && broken[0] >= 2 ){
		
		printf("Your numer is %s-%s \n",result,result2);
		}else{
		printf("Your number is : %s \n", result);
		}
	}

	return 0;
}
