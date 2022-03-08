#define PI 3.1415926
#include <stdio.h>
#include <math.h>
int main ()
  {
     double r,h,C,S,qS,qV,V;
	 r=1.5,h=3;
	 C=2*PI*r;
	 S=PI*r*r;
	 qS=4*PI*r*r;
	 qV=(4*PI*r*r*r)/3;
	 V=S*h;
	 printf ("圆周长C=%.2f\n圆面积S=%.2f\n圆球表面积qS=%.2f\n圆球体积qV=%.2f\n圆柱体积V=%.2f\n",C,S,qS,qV,V);
	 return 0;
}