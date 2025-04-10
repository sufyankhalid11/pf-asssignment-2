#include<iostream>
#include<fstream>
using namespace std;

int fun(int a[]){
    int max=a[0];
    for(int i=0;i<5;i++)
    {
        if(a[i]>max){
            max = a[i];
        }
    }
    return max;
}

int main()
{
   int arr[5];
   cout<<"enter nums \n";
   for(int i=0;i<5;i++)
   {
    cin>>arr[i];
   }
  int max2= fun(arr);
  cout<<"max num = "<<max2;
  return 0;
}