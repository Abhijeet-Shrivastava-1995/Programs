#include <stdio.h>
#include <math.h>
#include <ctype.h>

void main()
{
 float p,rate,ci,power,r;
 int tim;

 scanf("%f", &p);
 scanf("%f", &rate);
 scanf("%d", &tim);
 ci=p*(1+rate*tim);
if(tim>0&&p>0&&rate>0)
 printf("\nFinal_Amount  %0.0f",ci);
 else printf("Invalid input");
}
