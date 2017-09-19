#include <stdio.h>
#include <string.h>
#define MAX 50
int main()
{
  int i=4;
  double d=4.0;
  char s[]="hackerrank";
  int i1,count=0;
  double d1;
  char s1[MAX],ch;

  scanf("\n%d",&i1);
  scanf("\n%lf",&d1);

  while(ch!='\n')
  {
      scanf("%c",&ch);
      s1[count]=ch;
      count++;
  }
  s1[count]='\0';
  printf("\n%d",i+i1);
  printf("\n%0.1f",d+d1);
  strcat(s," ");
  printf("\n%s",strcat(s,s1));
  return 0;

}
