#include <stdio.h>
int main (void){
	int workinghour ;
	int hourrate = 50 ;
	int salary = workinghour*hourrate ;
	printf("Please Enter Your Working Hours :  ");
	scanf("%d" ,&workinghour);
	if(workinghour == 50)
	{
		printf("%d your salary is : ",workinghour*hourrate);
	}
	else
	{
		printf("%d",(workinghour*hourrate)-10);
	}
}
