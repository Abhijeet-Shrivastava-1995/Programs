#include <iostream>

using namespace std;

bool calc(int) ;

int main()
{
  bool ans;
  int T,i;
  int N[1000],temp;
  cin>>T;
  for(i=0;i<T;i++)
  {
    cin>>N[i];
  }
  for(i=0;i<T;i++)
  {
    temp=N[i];
    while((ans=calc(temp))!=1) temp--;
    cout<<"Case #"<<i+1<<": "<<temp<<"\n";
  }




}

bool calc(int temp)
{
int next = temp%10;
 temp = temp/10;
 while (temp)
 {
     int digit = temp%10;
     if (digit < next)
         return false;
     next = digit;
     temp = temp/10;
 }

 return true;
}
