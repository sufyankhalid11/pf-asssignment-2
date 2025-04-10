#include<iostream>
#include<string>
#include<fstream>
using namespace std;

void add()
{
  ofstream f1("students.txt", ios::app);
  string name , roll , depart  ;
  float gpa;
  cout<<"Enter name , roll , department , gpa \n";
  cin>>name>>roll>>depart>>gpa;
  f1<<name<<" "<<roll<<" "<<depart<<" "<<gpa<<endl;

}
void view(){
  ifstream f1("students.txt");
  string s;
  while(getline(f1,s)){
    cout<<s<<endl;
  }
}
void search(){
    bool present = false;
  ifstream f1("students.txt");
  if(!f1.is_open()){
    cout<<"Error!! file not opened \n";
  }
  string name , roll , depart ,searchroll ;
  float gpa;
  
  cout<<"enter roll to search \n";
  cin>>searchroll;
  while (f1>>name>>roll>>depart>>gpa)
  {
  if(searchroll==roll){
    present = true;
    cout<<name<<" "<<roll<<" "<<depart<<" "<<gpa<<endl;
  }
}
if(!present){
    cout<<"Invalid! roll number not found \n";
  }
f1.close();
}
void update(){
    bool present = false;
    ifstream f1("students.txt");
    if(!f1.is_open()){
      cout<<"Error!! file not opened \n";
    }
    string name[100] , roll[100] , depart[100] , gpa[100];
    int count =0;
    while (f1>>name[count]>>roll[count]>>depart[count]>>gpa[count])
    {
        count++;
    }
    string searchroll;
    cout<<"enter roll to search \n";
    cin>>searchroll;
    int req=0;
    for(int i=0;i<count;i++)
    {
        if(roll[i]==searchroll){
            req=i;
            present = true;
        }
    }
    if(present){
    ofstream f2("students.txt");
    cout<<"enter new name , roll , depart , gpa \n";
    cin>>name[req]>>roll[req]>>depart[req]>>gpa[req];
    for(int i=0;i<count;i++)
    {
        f2<<name[i]<<" "<<roll[i]<<" "<<depart[i]<<" "<<gpa[i]<<endl;
    }
}
    if(!present){
        cout<<"Invalid! roll number not found \n";
      }
  f1.close();
}
void deleterecord(){
    bool present = false;
    ifstream f1("students.txt");
    string name[100],roll[100],depart[100],gpa[100];
    int i=0;
    while(f1>>name[i]>>roll[i]>>depart[i]>>gpa[i]){
        i++;
    }
    string delroll;
    cout<<"enter roll of student to delete \n";
    cin>>delroll;
    int req;
    for(int j=0;j<i;j++)
    {
        if(roll[j]==delroll){
            present = true;
            req=j;}
    }
    if(present){
    ofstream f2("students.txt");
    if(!f2.is_open()){cout<<"error!! file not openend";}
    for(int j=0;j<i;j++)
    {
        if(j!=req){
            f2<<name[j]<<" "<<roll[j]<<" "<<depart[j]<<" "<<gpa[j]<<endl;
        }
    }
}
    if(!present){
        cout<<"Invalid! roll number not found \n";
      }
}

int main()
{
  int option;
  cout<<"Student Management System \n";
  cout<<"1. Add Student Record \n";
  cout<<"2. View All Student Records \n";
  cout<<"3. Search Student by Roll Number \n";
  cout<<"4.Update Student GPA \n";
  cout<<"5.Delete Student Record \n";
  cin>>option;
  if(option<1 || option >5)
  {
    cout<<"Invalid Input ! , Try again\n";
    return 0;
  }
  if(option==1){add();}
  else if(option==2){view();}
  else if(option==3){search();}
  else if(option==4){update();}
  else if(option==5){deleterecord();}
  return 0;
}