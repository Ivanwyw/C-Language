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
	 printf ("Բ�ܳ�C=%.2f\nԲ���S=%.2f\nԲ������qS=%.2f\nԲ�����qV=%.2f\nԲ�����V=%.2f\n",C,S,qS,qV,V);
	 return 0;
}