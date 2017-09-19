#include<stdio.h>
#include<string.h>
int valufun(int avail, int unavail)
{
int valu=0;
if(avail>unavail)
{
valu=valu+(avail*1);
unavail-=avail;
valu+=(avail*3);
}
else if(avail<unavail)
{
valu+=(unavail*1);
avail-=unavail;
unavail*=2;
valu=avail;
}
else if(avail==unavail)
{
valu=valu+unavail;
}
return valu;
}
int valucheck()
{
int i=0,j=0,k=0,t=0,l=0,need=0,avail=0,unavail=0,valu=0;
int cnt,len,flag;
char ch,str[50];
scanf("%s",str);
len=strlen(str);
char let[len];
for(i=0;i<len;i++)
{
ch=str[i];
flag=0;
for(k=0;k<len;k++)
{
if(let[j]==ch)
flag=1;
}
if(flag!=1)
{
need=0;
cnt=0;
for(j=0;let[j]!='\0';j++)
{
if(ch==str[k])
cnt++;
}
need=ch-96;
t=cnt-need;
if(t>0)
{
unavail+=(need-cnt);
}
if(t<0)
{
avail+=t;
}
let[l++]=ch;
let[l]='\0';
t=0;
}
}
valu=valufun(avail,unavail);
return valu;
}
int main()
{
int t=0,i=0;
scanf("%d",&t);
int ans[t];
for(i=0;i<t;i++)
ans[i]=valucheck();
for(i=0;i<t;i++)
printf("%d\n",ans[i]);
return 0;
}
