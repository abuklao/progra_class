#include <stdio.h>

int main(void){
	//dateTwo and earlDate are the two date we are working with
	//earldate will be the first date we input and consequently the on we will compare against dateTwo
	//if dateTwo is earlier then earlDate then earlDate will adopt dateTwo's value and continue in the
	//loop until otherwise instructed. 
	//This are arrays so date[0] is year so we can compare it first, date[1] is month, and lastly date[2] is the day as it is the last thing we compare
	int dateTwo[3],earlDate[3];

	//Asking for values
	printf("Please enter one date at a time (mm/dd/yy)\n");
	scanf("%d/%d/%d",&earlDate[1],&earlDate[2],&earlDate[0]);
	//this following printf was just debugging in case dates are not parsed correctly , uncomment when needed
	//printf("This is your first date isnt it ? : %d/%d/%d \n\n",earlDate[1],earlDate[2],earlDate[0]);
	
	//while loop so we can keep entering dates and comparing
	while(1){
		//we ask for dateTwo which we will compare against earlDate on every loop
		printf("Please enter following date (mm/dd/yy):0/0/0 will cancel the operation. \n");
		scanf("%d/%d/%d",&dateTwo[1],&dateTwo[2],&dateTwo[0]);
		//As instructed in the homework, if user inputs 0/0/0 then the date input is done and we output the earliest date
		if(dateTwo[0] == 0 && dateTwo[1] == 0 && dateTwo[2] == 0){
			printf("Cancelling operation ...");
					break;
		}else{
		//This again, is only for debugging purposes so uncomment as needed
		//printf("This is your second date isnt it ? : %d/%d/%d \n\n",dateTwo[1],dateTwo[2],dateTwo[0]);
		}
		//This for loop compares every single entry of the dates arrays in the following order :
		//year or "date[0]" > month or "date[1]" > and finally day or "date[2]"
		//if any of the components of dateTwo is earlier then earlDate then earlDate adopts such value and the loop breaks
		for(int i = 0; i < sizeof(earlDate)/sizeof(int); ++i){
			if(dateTwo[i] < earlDate[i]){
				//printf("%d/%d/%d Is earlier\n",dateTwo[1],dateTwo[2],dateTwo[0]);
				earlDate[0] = dateTwo[0];
				earlDate[1] = dateTwo[1];
				earlDate[2] = dateTwo[2];
				break;
			}
		}
	}
	//here the loop broke and so did our inputting, so now we just print the date that the program determined as the earliest
	printf("The earliest date is %d/%d/%d \n",earlDate[1],earlDate[2],earlDate[0]);
	return 0;
	//thank you ! :)
}
