#include<iostream>
#include<fstream>
using namespace std;
void add()
{
    ofstream f1("players.txt", ios::app);
    if(!f1.is_open()){
        cout<<"Error! file not opened ";
        return ;
    }
    string name , teamname , role , totalruns , wickets ;
    cout<<"Enter player name, team name, role (batsman/bowler/all-rounder), total runs, and wickets \n";
    cin>>name>>teamname>>role>>totalruns>>wickets;
    f1<<name<<" "<<teamname<<" "<<role<<" "<<totalruns<<" "<<wickets<<endl;
    f1.close();
}
void view(){
    ifstream f1("players.txt");
    if(!f1.is_open()){
        cout<<"Error! file not opened ";
        return ;
    }
    char a[200];
    while(f1.getline(a,200)){
        cout<<a<<endl;
    }
    f1.close();
}
void search()
{
    bool presentname = false;
    bool presentteam = false;
    ifstream f1("players.txt");
    if(!f1.is_open()){
        cout<<"Error! file not opened ";
        return ;
    }
    string name , teamname , role , totalruns , wickets , newname , newteam;
    cout<<"Search for player \n";
    int op2;
    cout<<"1. By name \n";
    cout<<"2. By teamname \n";
    cin>>op2;
    if(op2==1){
        cout<<"enter name \n";
        cin>>newname;
        while(f1>>name>>teamname>>role>>totalruns>>wickets)
        {
            if(name==newname){
                presentname =true;
                cout<<name<<" "<<teamname<<" "<<role<<" "<<totalruns<<" "<<wickets<<endl;
            }
        }
        if(!presentname){cout<<"player not found ";}
    }
    else if(op2==2)
    {
        cout<<"enter teamname \n";
        cin>>newteam;
        while(f1>>name>>teamname>>role>>totalruns>>wickets)
        {
            if(teamname==newteam){
                presentteam = true;
                cout<<name<<" "<<teamname<<" "<<role<<" "<<totalruns<<" "<<wickets<<endl;
            }
        }
        if(!presentteam){cout<<"team not found ";}
    }
    f1.close();
}
void update(){
    bool ispresent = false;
    ifstream f1("players.txt");
    if(!f1.is_open()){
        cout<<"Error! file not opened ";
        return ;
    }
    int i=0;
    int req=0;
    string newname;
    cout<<"enter name of player to update \n";
    cin>>newname;
    string name[100] , teamname[100] , role[100] , totalruns[100], wickets[100] ;
    while(f1>>name[i]>>teamname[i]>>role[i]>>totalruns[i]>>wickets[i])
    {
        if(name[i]==newname){
            ispresent = true;
            req=i;}
        i++;
    }
    f1.close();
    if(ispresent)
    {
    ofstream f2("players.txt");
    if(!f2.is_open()){
        cout<<"Error! file not opened ";
        return ;
    }
    
    cout<<"update for player \n";
    int op2;
    cout<<"1. runs \n";
    cout<<"2. wickets \n";
    cin>>op2;
    if(op2==1){
        string newrun;
        cout<<"enter new run\n";
        cin>>newrun;
        totalruns[req]=newrun;
    }
    else if(op2==2)
    {
        string neww;
        cout<<"enter new wickets\n";
        cin>>neww;
        wickets[req]=neww;
    }
    for(int j=0;j<i;j++){
    f2<<name[j]<<" "<<teamname[j]<<" "<<role[j]<<" "<<totalruns[j]<<" "<<wickets[j]<<endl;
    }
    f2.close();
    }
    else{
        cout<<"player not present ";
    }
}
void Delete(){
    bool ispresent = false;
    ifstream f1("players.txt");
    if(!f1.is_open()){
        cout<<"Error! file not opened ";
        return ;
    }
    int i=0;
    int req=0;
    string newname;
    cout<<"enter name of player to delete \n";
    cin>>newname;
    string name[100] , teamname[100] , role[100] , totalruns[100], wickets[100] ;
    while(f1>>name[i]>>teamname[i]>>role[i]>>totalruns[i]>>wickets[i])
    {
        if(name[i]==newname){
            ispresent = true;
            req=i;}
        i++;
    }
    f1.close();
    if(ispresent){
    ofstream f2("players.txt");
    for(int j=0;j<i;j++)
    {
        if(j==req){continue;}
    f2<<name[j]<<" "<<teamname[j]<<" "<<role[j]<<" "<<totalruns[j]<<" "<<wickets[j]<<endl;
    }
    f2.close();
    }
    else{
        cout<<"player not present ";
    }
}

int main()
{
    int op=1;
    do{
    cout<<"PSL Management System\n ";
    cout<<"1. Add Player Record\n";
    cout<<"2. View All Players\n";
    cout<<"3. Search Player by Name or Team\n";
    cout<<"4. Update Player Stats\n";
    cout<<"5. Delete Player Record\n";
    cout<<"Enter 0 to exit \n";
    cin>>op;
    if(op<0 || op>5)
    {
        cout<<"Invalid! input , Try Again\n";
    }
    switch (op)
    {
    case  1:
        add();
        break;
    case  2:
        view();
        break;
    case  3:
        search();
        break; 
    case  4:
        update();
        break;
    case  5:
        Delete();
        break;       
    
    default:
        break;
    }
}while(op!=0);
  return 0;
}
