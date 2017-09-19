#include <iostream>
using namespace std;

class array
{
    int arr[10];
  public:
    int even[10],odd[10];
    void entry();
    void show();
    void check();
};

void array::entry()
{
    cout<<"enter the elements-";
    int i;
    for(i=0;i<10;i++)
    {
        cin>>arr[i];
    }
}

void array::show()
{
    cout<<"\nthe elements are-";
    int i;
    for(i=0;i<10;i++)
    {
      cout<<arr[i]<<"\n";
    }
}

void array::check()
{
    int i;
    for(i=0;i<10;i++)
    {
      if(arr[i]%2==0)
       {
         even[i]=arr[i];
       }
      else
      {
        odd[i]=arr[i];
      }
    }
    cout<<"the elements of array even are-";
    for(i=0;i<5;i++)
    cout<<even[i];
    cout<<"the elements of odd array are-";
    for(i=0;i<5;i++)
    cout<<odd[i];
  }

int main()
{
    array obj;
    obj.entry();
    obj.show();
    obj.check();
    return 0;
}
