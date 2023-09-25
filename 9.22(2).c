#include<stdio.h>
//cmªªÀ„≥…”¢≥ﬂ∫Õ”¢¥Á 
int main()
{
	int cm=0;
	scanf("%d",&cm);
	int foot=cm/30.48;
	int inch=((cm/30.48)-foot)*12;
	printf("%d",foot);
	printf("%d",inch);
 } 
