#include <stdio.h>
  int main ()
{
  double grade;
  printf ("请输入具体分数!\n");
  scanf ("%lf",&grade);
  int s;
  s=grade/10;
  switch (s)
  {
  case 10:printf("A\n");break;
  case 9:printf("A\n");break;
  case 8:printf ("B\n");break;
  case 7:printf ("C\n");break;
  case 6:printf ("D\n");break;
  default :printf ("E\n");break;
  }
  return 0;
  }