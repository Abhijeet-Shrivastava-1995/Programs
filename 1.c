/*Question
https://www.codechef.com/problems/KOL16B/
*/


#include <stdio.h>
#include <math.h>

int main(){


int  i, j, x,n,l,k;
int a[100000],b[100000];

scanf("%d",&i);

for(k=1;k<=i;++k){
	scanf("%d",&j);
	printf("Case %d:\n",k);

	for(l=0;l<j;++l)
	{
		scanf("%d",&x);
		n=x>>16;
		x=x&(~(n<<16));
		a[l]=x;
		b[l]=n;
		}
	for(l=0;l<j;++l)
	printf("%d ",a[l]);
	printf("\n");
	for(l=0;l<j;++l)
	printf("%d ",b[l]);
	printf("\n");
}
