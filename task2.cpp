#include<iostream>
using namespace std;
int arrayfunction(int a[]){
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum += a[i];
    }
    return sum;
}

int main()
{
    int array[5];
    cout<<"enter 5 num for array \n";
    for(int i=0;i<5;i++)
    {
        cin>>array[i];
    }
   int sum= arrayfunction(array);
   cout<<"sum of all elementts = "<<sum;
  return 0;
}