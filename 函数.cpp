#include <stdio.h>
  int main ()
{
   double x,y;
   printf ("�����������һ��X!\n");
   scanf ("%lf",&x);
    if (x<1) y=x;
         else if (1<=x<10) y=2*x-1;
     else   y=3*x-11;
  printf ("y=%f\n",y);
	 return 0;
  }