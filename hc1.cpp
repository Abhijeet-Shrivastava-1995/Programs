#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //variables
    int t;
    unsigned n;
    int x[20000],y[20000];
    int count;
    int cas[50];
    int dx,dy,i;
    //input
    top:
    cin>>t;
    if(t>1 && t<50) goto top1;
    else goto top;
    top1:
    do {
      /* code */
      dx=dy=0;
      count=0;
      cin>>n;
      
      for(i=0;i<n;i++)
      {
        cin>>x[i]>>y[i];
      }
      dx=dy=0;
      count=0;
      for(i=0;i<n;i++)
      { dx=abs(x[i]-y[i]);
        dy=abs(x[i+1]-y[i+1]);
        if(x[i]==0 && y[i]==0) count=0;
        else if(dx==dy) count++;
        cas[i]=count;
      }

      t--;
    } while(t!=0);
    for(i=0;i<n;i++)
    {
    cout<<"case #"<<i+1<<": "<<cas[i]<<"\n";
}


    return 0;

}
