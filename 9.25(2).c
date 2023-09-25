#include<stdio.h>
//先进入循环再进行条件判断 
int main()
{
	int x;
	int n=0;
	scanf("%d",&x);
	do
{   x/=10;
    n++;
}while(x>0);
printf("%d",n);
return 0;
}
