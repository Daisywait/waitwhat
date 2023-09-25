#include<stdio.h>
 int main()
 { int x;
   int n=0;
   scanf("%d",&x);
//n++ x/=10写在前面是为了先让n=1（x=0) 
   n++;
   x/=10;
   while(x>0)
   { n++;
     x/=10;
   }
   printf("%d",n);
   return 0;
 }
