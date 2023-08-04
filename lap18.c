#include <stdio.h>

int main(void) {
    int id , password;
    printf("Please enter your ID: ");
    scanf("%d", &id);
	printf("Please enter your password: ");
    scanf("%d", &password);
    if (id == 1234 && password ==7788)
	{
		printf("Welcome Ahmed");
	}
	else if (id == 5678 && password == 5566)
	{
		printf("Welcome Amr ");
	}
	else if (id == 9870 && password == 1122)
	{
		printf("Welcome Wael");
	}
	else 
	{
		printf("You Are Not Rigested");
	}
}