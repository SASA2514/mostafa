#include <stdio.h>

int main(void) {
	int answer;
	printf("Please Enter The Result of 3*4 =  ");
	scanf("%d",&answer);
	if(answer==12)
	{
		printf("Thanks!");
	}
	else
	{
		printf("Not Correct! Please Try Again");
	}
}