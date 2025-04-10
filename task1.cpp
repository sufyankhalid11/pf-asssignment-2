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
    int array[5];
    cout<<"enter 5 num for array \n";
    for(int i=0;i<5;i++)
    {
        cin>>array[i];
    }
    arrayfunction(array);
  return 0;
}
