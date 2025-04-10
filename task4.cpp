#include<iostream>
#include<fstream>
using namespace std;


void fun(string str){
ofstream f1("output.txt");

    for(int i=0;str[i]!='\0';i++)
    {
        f1<<str[i];
    }
    f1.close();
}
int main()
{
    string s;
    cout<<"enter string\n";
    getline(cin , s);
    fun(s);
  return 0;
}