#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
      int t,i,j,count[100];
      char s[100][300];
      scanf("%d",&t);
      if(t<=100)
      {
          for(i=0;i<t;i++)
          {
            for(j=0;j!='\n';j++)
            {
            s[t][j]=getchar();
            if(islower(s[t][i]))
            {
              if(s[t][i]=='a')
              {
              count[i]=1;
              }

            }
          }
        }
      }

}
