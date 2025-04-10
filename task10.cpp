#include<iostream>
#include<fstream>
using namespace std;
void fun(int a[]){
  int a2[5];
  for(int i=0;i<5;i++)
  {
    a2[i]=a[i];
  }
  for(int i=0;i<5;i++)
  {
    cout<<a2[i]<<" ";
    }
}
int main()
{
  int arr[5];
  cout<<"enter nums for array \n";
  for(int i=0;i<5;i++)
  {
    cin>>arr[i];
  }
  fun(arr);

  return 0;
}