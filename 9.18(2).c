#include<stdio.h>
//ÄæĞò 
int main()
{   int x=0;
	scanf("%d",&x);
	int	a=x/100;
	int b=x%10;
    int c=x%100/10; 
	printf("%d",b*100+c*10+a);
	return 0;
    
 } 
