#include <stdio.h>

int func (void);

int main ()
{
	func();
}
int func(void) {
    int x , i ; 
	printf("Enter the number ");
	scanf("%d",&x);
	for(i=0 ; i<=x ; i++)
	{
		printf("%d",i);
	}
	return 0;
}

