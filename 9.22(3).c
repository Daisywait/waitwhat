#include<stdio.h>
//��if��дʱ��� 
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
   printf("ʱ�����%dʱ%d��",ih,im);
 } 
