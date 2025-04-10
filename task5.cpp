#include<iostream>
#include<fstream>
using namespace std;

void fun(char a[]){
    for(int i=0;a[i]!='\0';i++)
    {
        cout<<a[i]<<endl;
    }
}

int main()
{
    char arr[100];
    cout<<"enter sentence "<<endl;
    cin.getline(arr,100);
    fun(arr);

  return 0;
}