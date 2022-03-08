#include <stdio.h>
 int main ()
 {
	 double c,F;
	 printf ("请输入任意一个华氏温度!\n");
	 scanf ("%lf",&F);
	 c=(5*(F-32))/9;
	 printf ("对应的摄氏温度c=%.2f\n",c);
	 return 0;
 }