#include<iostream>
#include<fstream>
using namespace std;
void fun(){
    ifstream f2("output.txt");
    int c=0;
    string a;
    while(f2>>a){c++;}
    cout<<"count = "<<c;
    f2.close();
}
int main()
{
    fun();
  return 0;
}