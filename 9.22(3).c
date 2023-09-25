#include<stdio.h>
//用if来写时间差 
int main()
{ int hour1=0;
  int minute1=0;
  int hour2=0;
  int minute2=0;
  int ih;
  int im;
  scanf("%d %d",&hour1,&minute1);
  scanf("%d %d",&hour2,&minute2);
  ih=hour2-hour1;
  im=minute2-minute1;
  if(im<0){
  	im=im+60;
  	ih--;
  }
   printf("时间差是%d时%d分",ih,im);
 } 
