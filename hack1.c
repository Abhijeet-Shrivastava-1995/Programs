# include <stdio.h>

int array[100];

int odd[100],even[100];

int main()
{
    int n,i,j,d,swap,count=0,c;

    //printf("enter the size of the array-");
    scanf("%d",&n);
    //printf("\nenter the elements of the array")
    for(i=0;i<n;i++)
    {
      scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
      if(array[i]%2==0)
      {
        even[i]=array[i];
      }
      else
      {
        odd[i]=array[i];
      }
   }

    for (i = 0 ; i < (n-1); i++)
   {
   for (d = 0 ; d < n - i - 1; d++)
   {
     if (even[d] > even[d+1]) /* For decreasing order use < */
     {
       swap       = even[d];
       even[d]   = even[d+1];
       even[d+1] = swap;
       count++;
     }
   }
  }

for (c = 0 ; c < ( n - 1 ); c++)
{
  for (d = 0 ; d < n - c - 1; d++)
   {
     if (odd[d] > odd[d+1]) /* For decreasing order use < */
     {
       swap       = odd[d];
       odd[d]   = odd[d+1];
       odd[d+1] = swap;
       count++;
     }
   }
 }

printf("%d",count);

return 0;

}
