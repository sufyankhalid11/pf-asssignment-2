#include<iostream>
#include<fstream>
using namespace std;
void fun(char a[]){
  bool ispalind=true;
  int c=0;
  for(int i=0;a[i]!='\0';i++){c++;}
  for(int i=0;i<c/2;i++)
  {
    if(a[i]!=a[c-i-1]){
      ispalind = false ;
    }
  }
  if(ispalind){
  cout<<"string is palindrone \n";
  }
  else{
  cout<<"string is not palindrone \n";
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