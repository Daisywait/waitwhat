#include<stdio.h>
//1120表示11点20分 过了130分钟然后是几点呢用类似1120的形式表示 
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
