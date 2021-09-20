//Q14. Program to read and dislay the number of times the word "the" occurs as an independent word in text file.
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
clrscr();
ifstream fin;
fin.open("TEXTFILE.txt",ios::in);
char str[80];
int count=0;
while(!fin.eof())
{
fin>>str;
if(strcmp(str,"the")==0)
count++;
}
cout<<"\nNo Of TIMES (the) Present in the file is:";
cout<<count;
fin.close();
getch();
}


