#include<stdio.h>
//½×³Ë while 
int main()
{
	int n;
	int i=1;
	int fact=1;
	scanf("%d",&n);
	while(i<=n){
		fact*=i; 
		i++;
	}
	printf("%d£¡=%d",n,fact);
	return 0;
	
}
