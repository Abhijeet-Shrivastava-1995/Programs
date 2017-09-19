#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int T,k,i,count1,ind[1000],count2;
    char S[100][1000];
    i=0;count1=0;count2=0;
    cin>>T;
    if(T<=100)
    {
      for(i=T;i>0;i--)
      {
        cin>>S[i];cin>>k;
      }
    }
  /*  for(i=0;i<T;i++)
    {
      for(int j=0;j!='\0';j++)
      {
        if(S[i][j]=='-')
        {
          for(int l=0;l<k;l++)
          {
            S[i][j]=='+';
          }
        }
        count2++;
      }
      ind[i]=count2;
  }*/
  for(i=0;i<k;i++)
  {
    ind[i]='+';
  }
  for(i=0;i<T;i++)
  {
    for(int j=0;j!='\0';j++)
    {
      if(S[i][j]=='-')
      {
        S[i][j]=ind[i];
      }
    }
  }
    for(i=0;i<T;i++)
    {
      cout<<"Case #"<<i+1<<": ";
      if(ind[i]==0) cout<<"IMPOSSIBLE \n";
      else cout<<ind[i]<<"\n";
    }

}
