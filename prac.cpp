#include <stdio.h>
#include <conio.h>
#define BUFFER_SIZE 3

int produceitem();
int buffer[BUFFER_SIZE],item;
int fillcount=0;
int emptycount=BUFFER_SIZE;

int producer()
{
    while(1)
    {
        item=produceitem();
        if(item==0) return item;
        if(emptycount==0)
        { printf("buffer full");break;}
        emptycount--;
        buffer[emptycount--]=item;
        printf("\n %d put into the buffer",item);
        fillcount++;
      }
      return 0;

}
