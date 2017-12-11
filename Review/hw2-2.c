#include <stdio.h>

int main (){
	int date, month, year;
	int datec,monthc,yearc;
	printf("please enter your date in the following format mm/dd/yy \n");
	scanf("%d/%d/%d",&month, &date,&year);
	while(1){
		puts("Please enter your next date");
		scanf("%d/%d/%d",&datec,&monthc, &yearc);
		if(datec == 0 && monthc == 0 && yearc == 0){
			break;
		}
		else{
			puts("Comparing...");
			//compare 
			if(yearc<=year){
				if(monthc<=month){
					if(datec <= date){
						year = yearc;
						month = monthc;
						date = datec;
					}
				}
			}
		}
	}

		printf("Outpititng your dates : \n %d/%d/%d\n",month,date,year);

		return 0;
}
