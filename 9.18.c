#include<stdio.h>
//1120��ʾ11��20�� ����130����Ȼ���Ǽ�����������1120����ʽ��ʾ 
int main()
{
	int t,d,h,m;
	scanf("%d %d",&t,&d);
	h=t/100;
	m=t%100;
	t=h*60+d+m;
	h=t/60;
	m=t%60;
	printf("%d",h*100+m);
	return 0;
}
