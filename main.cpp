#include <iostream>
#include <conio.h>
#include <fstream>
#include <stdio.h>
#include <process.h>
using namespace std;
class student
{
private:
    int rno;
    char name[30];
    float marks;
public:
    void getInfo()
    {
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"\nEnter the roll no: ";
        cin>>rno;
        cout<<"\nEnter the marks: ";
        cin>>marks;
    }
    void showInfo()
    {

        cout<<"Name of student\n"<<name;
        cout<<"\nRoll No. of student\n"<<rno;
        cout<<"\nMarks of student\n"<<marks;
    }
    int rollno()
    {
     return rno;
    }
}s;
void create()
{
    char ch;
    ofstream fout;
    fout.open("a.dat",ios::binary|ios::app);
    do
    {
        s.getInfo();
        fout.write((char*)&s,sizeof(s));
        cout<<"Do you want to add more things";
        cin>>ch;
    }while(ch=='y'||ch=='Y');
    fout.close();
}
void display()
{
    ifstream fin;
    fin.open("a.dat",ios::binary|ios::in);
    while(fin.read((char*)&s,sizeof(s)))
    {
        s.showInfo();
    }
    fin.close();
}
void searchitem()
{
    int rn;
    ifstream fin;
    fin.open("a.dat",ios::binary|ios::in);
    cout<<"Enter the roll no of student to be searched:";
    cin>>rn;
    while(fin.read((char*)&s,sizeof(s)))
    {
        if(s.rollno()==rn)
         {
             s.showInfo();
         }
    }
    fin.close();
}
void modify()
{
    int rn;
   // cin>>rn;
    ifstream fin("a.txt",ios::in);
    ofstream fout("temp.dat",ios::out);
    cout<<"Enter the roll no of student to be modified:";
    cin>>rn;
    fin.seekg(0);
//    cout<<rno;
    while(fin.read((char*)&s,sizeof(s)))
    {
        if(s.rollno()==rn)
        { cout<<"enter info";
         s.getInfo();
         fout.write((char*)&s,sizeof(s));
        }
    else
    fout.write((char*)&s,sizeof(s));
    }
     //fout.close();
     char old_name[]="temp.dat";
     char new_name[]="a.dat";
     remove("a.dat");
     rename(old_name,new_name);
}
void deletes()
{
    int rn;
    ifstream fin("a.dat",ios::binary);
    ofstream fout("temp.dat",ios::binary);
    cin>>rn;
    while(fin.read((char*)&s,sizeof(s)))
    {
        if(s.rollno()!=rn)
            {
                fout.write((char*)&s,sizeof(s));
            }
    }
     char old_name[]="temp.dat";
     char new_name[]="a.dat";
     remove("a.dat");
     rename(old_name,new_name);
    /*remove("a.dat");
    rename("temp.dat","a.dat");*/
    }
int main()
{
    char chi;
    int x;
    cout<<"\t\tMAIN MENU\n";
    cout<<"\t\t1.Create\n";
    cout<<"\t\t2.display\n";
    cout<<"\t\t3.search\n";
    cout<<"\t\t4.modify\n";
    cout<<"\t\t5.Delete\n";
    cout<<"\t\tEnter the function to executed:";
//    clrscr();
    do{
    //cout<<"\t\tEnter the function to executed:";

    cout<<"Enter the operation no to be executed:";
    cin>>x;
    switch(x)
    {
    //    cin x;
    case 1:
        create();
        //goto dis;
        break;
    case 2:
    //dis:
        display();
        break;
    case 3:
        searchitem();
        break;
    case 4:
        modify();
        break;
    case 5:
        deletes();
        break;
    default:
        cout<<"Other options takes place";
    }
    cout<<"\n\n want to carry more process(y/n)";
    cin>>chi;
    }while(chi=='y'||chi=='Y');
   return 0;
  // getch()
}
