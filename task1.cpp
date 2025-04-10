#include<iostream>
using namespace std;
void arrayfunction(int a[]){
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int array[5]={1,2,3,4,5};
    arrayfunction(array);
  return 0;
}