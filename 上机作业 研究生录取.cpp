#include <stdio.h>
int main ()
{
  double g1,g2,g3,g4,grade;
  grade=g1+g2+g3+g4;
  printf ("���������ųɼ�!\n");
  scanf ("%lf%lf%lf%lf",&g1,&g2,&g3,&g4);
  if (g1<60||g2<60||g3<60||g4<60)
	printf ("δ¼ȡ!���������ޣ�\n");
     else if (grade<340)
	printf ("δ¼ȡ!���ܷ����ޣ�\n");
     else if  (340<=grade<=370)
	printf ("��¼ȡ!���Էѣ�\n");
  if (grade>370)
    printf ("��¼ȡ!�����ѣ�\n");
  return 0;
}