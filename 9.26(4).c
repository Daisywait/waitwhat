#include<stdio.h>
//½×³Ë forÑ­»·
int main()
{
	int i=1;
	int n;
	int fact=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		fact*=i;
	}
	printf("%d",fact);
	return 0;
	
}
 
