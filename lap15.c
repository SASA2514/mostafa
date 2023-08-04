#include <stdio.h>

int maxNumber(int a, int b, int c, int d);
int minNumber(int a, int b, int c, int d);
	
 int main()
 {
	int a ,b ,c ,d ;
    printf(" Please Enter Four Numbers : \n ");
	scanf("%d%d%d%d" , &a,&b,&c,&d);
	printf("The Maximum Number  = %d\n " ,maxNumber(a,b,c,d));
	printf("The Minimum Number  =  %d " , minNumber(a,b,c,d));
	return 0;
 }
 int maxNumber(int a, int b, int c, int d)
 {
	int max = a ;
	if (b > max) max = b ;
	if (c > max) max = c;
	if (d > max) max = d; 
	return max ;
 }
 
 int minNumber(int a , int b , int c , int d )
 {
	 int min = a ;
	if(b < min) min = b ;
    if(c < min) min = c ;
	if(d < min) min = d ;
	return min ;
 }
 
 
 

 
    

 
    
