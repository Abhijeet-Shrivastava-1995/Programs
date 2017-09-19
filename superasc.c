#include <stdio.h>
#include <string.h>

void main()
{
  char s[300];
  int t,i,len[100],count[300],j,del=0,add=0,rep=0;
  int idxToDel;
  scanf("%d",&t);
  if(t<=100)
  {
    for(i=1;i<=t;i++)
    {
        scanf("%s",s);
        len[i]=strlen(s);
    }

  }
  else
  {
    printf("Testcases exceeded");
  }


  for(i=1;i<=t;i++)
  {
    for(j=0;j<len[i];j++)
    {     count[j]=0;
          if(s[j]<122 && s[j]>97)
          {
            if(s[j]=='a') count[j]=1;
            if(s[j]=='b') count[j]=2;
            if(s[j]=='c') count[j]=3;
            if(s[j]=='d') count[j]=4;
            if(s[j]=='e') count[j]=5;
            if(s[j]=='f') count[j]=6;
            if(s[j]=='g') count[j]=7;
            if(s[j]=='h') count[j]=8;
            if(s[j]=='i') count[j]=9;
            if(s[j]=='j') count[j]=10;
            if(s[j]=='k') count[j]=11;
            if(s[j]=='l') count[j]=12;
            if(s[j]=='m') count[j]=13;
            if(s[j]=='n') count[j]=14;
            if(s[j]=='o') count[j]=15;
            if(s[j]=='p') count[j]=16;
            if(s[j]=='q') count[j]=17;
            if(s[j]=='r') count[j]=18;
            if(s[j]=='s') count[j]=19;
            if(s[j]=='t') count[j]=20;
            if(s[j]=='u') count[j]=21;
            if(s[j]=='v') count[j]=22;
            if(s[j]=='w') count[j]=23;
            if(s[j]=='x') count[j]=24;
            if(s[j]=='y') count[j]=25;
            if(s[j]=='z') count[j]=26;

          }

    }

  }
  /*for(i=1;i<=t;i++)
  {
    printf("%s",s);
  }*/

  for(i=1;i<=t;i++)
  {
    for(j=0;j<len[i];j++)
    {     count[j]=0;
          if(s[j]<122 && s[j]>97)
          {
            if(s[j]=='a' )
            {
              if(count[j]!=1) {
            idxToDel=j;
            memmove(&s[idxToDel], &s[idxToDel + 1], strlen(s) - idxToDel);
            del=del+3;

              }
            }
            if(s[j]=='b')
            {
              {
                if(count[j]!=2) {
                  if(count[j]>2)
                  {
              idxToDel=j;
              memmove(&s[idxToDel], &s[idxToDel + 1], strlen(s) - idxToDel);
              del=del+3;
            }
            else if(count[j]<2)
            {
              strcat(s,"b");add=add+2;
            }
                }
              }
            }
            if(s[j]=='c')
            {
              {
                if(count[j]!=3) {
                  if(count[j]>3)
                  {
              idxToDel=j;
              memmove(&s[idxToDel], &s[idxToDel + 1], strlen(s) - idxToDel);
              del=del+3;
            }
            else if(count[j]<3)
            {
              strcat(s,"c");add=add+2;
            }
                }
              }
            }
            if(s[j]=='d')
            {
              {
                if(count[j]!=4) {
                  if(count[j]>4)
                  {
              idxToDel=j;
              memmove(&s[idxToDel], &s[idxToDel + 1], strlen(s) - idxToDel);
              del=del+3;
            }
            else if(count[j]<4)
            {
              strcat(s,"d");add=add+2;
            }
                }
              }
            }
            if(s[j]=='e') {
              {
                if(count[j]!=5) {
                  if(count[j]>5)
                  {
              idxToDel=j;
              memmove(&s[idxToDel], &s[idxToDel + 1], strlen(s) - idxToDel);
              del=del+3;
            }
            else if(count[j]<5)
            {
              strcat(s,"e");add=add+2;
            }
                }
              }
            }
            if(s[j]=='f') {
              {
                if(count[j]!=6) {
                  if(count[j]>6)
                  {
              idxToDel=j;
              memmove(&s[idxToDel], &s[idxToDel + 1], strlen(s) - idxToDel);
              del=del+3;
            }
            else if(count[j]<6)
            {
              strcat(s,"f");add=add+2;
            }
                }
              }
            }
            if(s[j]=='g') {
              {
                if(count[j]!=7) {
                  if(count[j]>7)
                  {
              idxToDel=j;
              memmove(&s[idxToDel], &s[idxToDel + 1], strlen(s) - idxToDel);
              del=del+3;
            }
            else if(count[j]<7)
            {
              strcat(s,"g");add=add+2;
            }
                }
              }
            }
            if(s[j]=='h') {
              {
                if(count[j]!=8) {
                  if(count[j]>8)
                  {
              idxToDel=j;
              memmove(&s[idxToDel], &s[idxToDel + 1], strlen(s) - idxToDel);
              del=del+3;
            }
            else if(count[j]<8)
            {
              strcat(s,"h");add=add+2;
            }
                }
              }
            }
            if(s[j]=='i') {
              {
                if(count[j]!=9) {
                  if(count[j]>9)
                  {
              idxToDel=j;
              memmove(&s[idxToDel], &s[idxToDel + 1], strlen(s) - idxToDel);
              del=del+3;
            }
            else if(count[j]<9)
            {
              strcat(s,"i");add=add+2;
            }
                }
              }
            }
            if(s[j]=='j') {
              {
                if(count[j]!=10) {
                  if(count[j]>10)
                  {
              idxToDel=j;
              memmove(&s[idxToDel], &s[idxToDel + 1], strlen(s) - idxToDel);
              del=del+3;
            }
            else if(count[j]<10)
            {
              strcat(s,"j");add=add+2;
            }
                }
              }
            }
            if(s[j]=='k') {
              {
                if(count[j]!=11) {
                  if(count[j]>11)
                  {
              idxToDel=j;
              memmove(&s[idxToDel], &s[idxToDel + 1], strlen(s) - idxToDel);
              del=del+3;
            }
            else if(count[j]<11)
            {
              strcat(s,"k");add=add+2;
            }
                }
              }
            }
            if(s[j]=='l') {
              {
                if(count[j]!=12) {
                  if(count[j]>12)
                  {
              idxToDel=j;
              memmove(&s[idxToDel], &s[idxToDel + 1], strlen(s) - idxToDel);
              del=del+3;
            }
            else if(count[j]<12)
            {
              strcat(s,"l");add=add+2;
            }
                }
              }
            }
            if(s[j]=='m'){
              {
                if(count[j]!=13) {
                  if(count[j]>13)
                  {
              idxToDel=j;
              memmove(&s[idxToDel], &s[idxToDel + 1], strlen(s) - idxToDel);
              del=del+3;
            }
            else if(count[j]<13)
            {
              strcat(s,"m");add=add+2;
            }
                }
              }
            }
            if(s[j]=='n') {
              {
                if(count[j]!=14) {
                  if(count[j]>14)
                  {
              idxToDel=j;
              memmove(&s[idxToDel], &s[idxToDel + 1], strlen(s) - idxToDel);
              del=del+3;
            }
            else if(count[j]<14)
            {
              strcat(s,"n");add=add+2;
            }
                }
              }
            }
            if(s[j]=='o') {
              {
                if(count[j]!=15) {
                  if(count[j]>15)
                  {
              idxToDel=j;
              memmove(&s[idxToDel], &s[idxToDel + 1], strlen(s) - idxToDel);
              del=del+3;
            }
            else if(count[j]<15)
            {
              strcat(s,"o");add=add+2;
            }
                }
              }
            }
            if(s[j]=='p') {
              {
                if(count[j]!=16) {
                  if(count[j]>16)
                  {
              idxToDel=j;
              memmove(&s[idxToDel], &s[idxToDel + 1], strlen(s) - idxToDel);
              del=del+3;
            }
            else if(count[j]<16)
            {
              strcat(s,"p");add=add+2;
            }
                }
              }
            }
            if(s[j]=='q') {
              {
                if(count[j]!=17) {
                  if(count[j]>17)
                  {
              idxToDel=j;
              memmove(&s[idxToDel], &s[idxToDel + 1], strlen(s) - idxToDel);
              del=del+3;
            }
            else if(count[j]<17)
            {
              strcat(s,"q");add=add+2;
            }
                }
              }
            }
            if(s[j]=='r') {
              {
                if(count[j]!=18) {
                  if(count[j]>18)
                  {
              idxToDel=j;
              memmove(&s[idxToDel], &s[idxToDel + 1], strlen(s) - idxToDel);
              del=del+3;
            }
            else if(count[j]<18)
            {
              strcat(s,"r");add=add+2;
            }
                }
              }
            }
            if(s[j]=='s') {
              {
                if(count[j]!=19) {
                  if(count[j]>19)
                  {
              idxToDel=j;
              memmove(&s[idxToDel], &s[idxToDel + 1], strlen(s) - idxToDel);
              del=del+3;
            }
            else if(count[j]<19)
            {
              strcat(s,"s");add=add+2;
            }
                }
              }
            }
            if(s[j]=='t'){
              {
                if(count[j]!=20) {
                  if(count[j]>20)
                  {
              idxToDel=j;
              memmove(&s[idxToDel], &s[idxToDel + 1], strlen(s) - idxToDel);
              del=del+3;
            }
            else if(count[j]<20)
            {
              strcat(s,"t");add=add+2;
            }
                }
              }
            }
            if(s[j]=='u') {
              {
                if(count[j]!=21) {
                  if(count[j]>21)
                  {
              idxToDel=j;
              memmove(&s[idxToDel], &s[idxToDel + 1], strlen(s) - idxToDel);
              del=del+3;
            }
            else if(count[j]<21)
            {
              strcat(s,"u");add=add+2;
            }
                }
              }
            }
            if(s[j]=='v') {
              {
                if(count[j]!=22) {
                  if(count[j]>22)
                  {
              idxToDel=j;
              memmove(&s[idxToDel], &s[idxToDel + 1], strlen(s) - idxToDel);
              del=del+3;
            }
            else if(count[j]<22)
            {
              strcat(s,"v");add=add+2;
            }
                }
              }
            }
            if(s[j]=='w') {
              {
                if(count[j]!=23) {
                  if(count[j]>23)
                  {
              idxToDel=j;
              memmove(&s[idxToDel], &s[idxToDel + 1], strlen(s) - idxToDel);
              del=del+3;
            }
            else if(count[j]<23)
            {
              strcat(s,"w");add=add+2;
            }
                }
              }
            }
            if(s[j]=='x') {
              {
                if(count[j]!=24) {
                  if(count[j]>24)
                  {
              idxToDel=j;
              memmove(&s[idxToDel], &s[idxToDel + 1], strlen(s) - idxToDel);
              del=del+3;
            }
            else if(count[j]<24)
            {
              strcat(s,"x");add=add+2;
            }
                }
              }
            }
            if(s[j]=='y') {
              {
                if(count[j]!=25) {
                  if(count[j]>25)
                  {
              idxToDel=j;
              memmove(&s[idxToDel], &s[idxToDel + 1], strlen(s) - idxToDel);
              del=del+3;
            }
            else if(count[j]<25)
            {
              strcat(s,"y");add=add+2;
            }
                }
              }
            }
            if(s[j]=='z') {
              {
                if(count[j]!=26) {
                  if(count[j]>26)
                  {
              idxToDel=j;
              memmove(&s[idxToDel], &s[idxToDel + 1], strlen(s) - idxToDel);
              del=del+3;
            }
            else if(count[j]<26)
            {
              strcat(s,"z");add=add+2;
            }
                }
              }
            }

          }

    }

  }

printf("%d",del+add+rep);
}
