#include <stdio.h>
#include <conio.h>
#include <string.h>

int n,twt,ttt,w,bu[10],a[10],w[10];
float awt,att;
char pname[20][20],c[20][20];

void getdata();
void fcfs();
void calculate();
void gantt_chart();

void getdata()
{
  int i ;
  printf("enter the number of processes-");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      fflush(stdin);
      printf("\n\nname-");
      scanf("%s",&pname[i]);
      printf("\nenter the burst time for process");
      scanf("%d",&bu[i]);
      printf("\nenter the arrival time for process");
      scanf("%d",&a[i]);

  }
}

void gantt_chart()
{
    int i;
    printf("gantt chart");
    for(i=1;i<=n;i++)
    printf("| \t %s \t",pname[i]);
    printf("\n-------------------");
    for(i=1;i<=n;i++)
    printf("%d \t\t",wt[i]);
    printf("\n--------------------");
}

void calculate()
{
     int i;
     wt[1]=0;
     for(i=2;i<=ni++)
     {
        wt[i]=bu[i-1]+wt[i-1];
     }
     for(i=1;i<=n;i++)
     {
       twt=twt+(wt[i]-a[i]);
       ttt=ttt+(wt[i]+bu[i]-a[i]);

     }
     att=(float)ttt/n;
     awt=(float)twt/n;
     printf("printf\n", );
}

void fcfs()
{
  int i,j,temp,temp1;
  twt=0;ttt=0;
  printf("fcfs");
  for(i=1;i<=n;i++)
  {
    for(j=i+1;j<=n;j++)
    {
        if(a[i]>a[j])
        {
          temp=bu[i];
          temp1=a[i];
          bu[i]=bu[j];
          a[i]=a[j];
          bu[j]=temp;
          a[j]=temp1;
          strcpy(c[i],pname[i]);
          strcpy(pname[i],pname[j]);
          strcpy(pname[j],c[i]);
        }


    }
  }
    calculate();
    gantt_chart();
}

void main()
{
    int ch;

    clrscr();
    getdata();
    fcfs();
    getch();

}
