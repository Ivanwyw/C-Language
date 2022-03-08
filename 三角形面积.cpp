#include <stdio.h>
#include <math.h>
   int main ()
   {
	   double a,b,c,s;
	   double area;
	   printf ("Please input three interge numbers!\n");
	   scanf ("%lf%lf%lf",&a,&b,&c);
	   s=(a+b+c)/2;
	   area=sqrt(s*(s-a)*(s-b)*(s-c));
	   printf ("area=%f\n",area);
	   return 0;
   }

