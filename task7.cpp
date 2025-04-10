#include<iostream>
using namespace std;
void fun(char a[]){
    int c=0;
    for(int i=0;a[i]!='\0';i++){c++;}
    for(int i=0;i<c;i++){
        cout<<a[c-1-i];
    }
}
int main()
{
    char arr[100];
    cout<<"enter sentence \n";
    cin.getline(arr,100);
    fun(arr);
  return 0;
}