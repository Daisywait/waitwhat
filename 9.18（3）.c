#include<stdio.h>
//ÄæĞò 
int main()
{
	int num=0;
	scanf("%d",&num);
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	a=num/100;
	b=num%10;
	c=num%100/10;
	d=b*100+c*10+a;
	printf("%d",d);
	return 0;
}
