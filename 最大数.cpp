#include <stdio.h>
  int main ()
{
  int a,b,c,max;
  printf ("请输入任意三个整数!\n");
  scanf ("%d%d%d",&a,&b,&c);
  if (a>b) max=a;
  else max=b;
  if (max>c) printf ("max=%d",max);
  else printf ("最大值为c=%d",c);
  return 0;
  }