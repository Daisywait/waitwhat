#include<stdio.h>
//��if�����0������� 
int main()
{
	int x;
	int n=0;
	scanf("%d",&x);
	if(x>0){
		while(x>0){
			n++;
			x/=10;
		}
	}else{
		n=1;
	}
	printf("%d",n);
	return 0;
}
