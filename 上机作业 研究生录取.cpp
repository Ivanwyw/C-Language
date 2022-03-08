#include <stdio.h>
int main ()
{
  double g1,g2,g3,g4,grade;
  grade=g1+g2+g3+g4;
  printf ("请输入四门成绩!\n");
  scanf ("%lf%lf%lf%lf",&g1,&g2,&g3,&g4);
  if (g1<60||g2<60||g3<60||g4<60)
	printf ("未录取!（单科受限）\n");
     else if (grade<340)
	printf ("未录取!（总分受限）\n");
     else if  (340<=grade<=370)
	printf ("已录取!（自费）\n");
  if (grade>370)
    printf ("已录取!（公费）\n");
  return 0;
}