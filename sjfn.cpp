#include <iostream.h>
#include <conio.h>

class sjfschedule
{
    int n.bu[20],b[10];
    float twt,awt,wt[20],w,a[10];
  public:
    void getdata();void sjf();
};

void sjfschedule::getdata()
{
  int i;
  cout<<"enter the number of processes-";
  cin>>n;
  for(i=1;i<=n;i++)
  {
      cout<<"\n enter the burst time for process p"<<i<<"\n";
      cin>>bu[i];
      cout<<"\n enter the arrival time for process p "<<i<<"\n";
      cin>>a[i];

  }
}


void sjfschedule::sjf()
{
    int i,j,temp;
    float twt=0.0;ttt=0.0;att;
    for(i=1;i<=n;i++)
    {
        b[i]=bu[i];
        cout<<" burst time for process p"<<i<<"\n";
        cout<<b[i];
    }
    for(i=n;i>=1;i--)
    {
      for(j=2;j<=n;j++)
      {
          if(b[j-1]>b[j])
          {
              temp=b[j-1];
              b[j-1]=b[j];
              b[j]=temp;

          }
      }
    }
    wt[1]=0;
    for(i=2;i<=n;i++)
    {
      wt[i]=b[i-1]+wt[i-1];
    }

    for(i=1;i<=n;i++)
    {
        twt=twt+wt[i];
        ttt=ttt+((wt[i]+b[i])-a[i]);
    }
    awt=twt/n;
    att=ttt/n;
    printf("%s\n", );
    printf();
}

void main()
{
    clrscr();
    sjfschedule obj;
    obj.getdata();
    obj.sjf();
    getch();
}


}
