#include<iostream>
#include<windows.h>
using namespace std;
void choices();
void printmenu();
void enterchoice();
void status();
void e1portfolio();
void gotoxy(int x,int y);
string gmail,lgmail,lpassword,password;
string stat,job,offer;
string name,city,edu,edu1,edu2,school,clg,uni,grade1,grade2;
int age;
float gpa;
int x,y;
main()
{
  while(true)
  {
  enterchoice();
  Sleep(1500);
  system("cls");
  }
}
void gotoxy(int x,int y)
{
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}


void printmenu()
{
cout<<"                                                                                                                                          "<<endl;
cout<<"                                                                                                                                          "<<endl;
cout<<"                                                                                                                                          "<<endl;
cout<<"                ************************************************************************************************************************* "<<endl;
cout<<"                **  ######   #####   ######  ####### ####### ######      ######  #####  ###     ## ###     ## #######  ###### ######## ** "<<endl;                                                                                             
cout<<"                ** ##       ##   ##  ##   ## ##      ##      ##   ##    ##      ##   ## ####    ## ####    ## ##      ##         ##    ** "<<endl;
cout<<"                ** ##       ##   ##  ##   ## ##      ##      ##   ##    ##      ##   ## ## ##   ## ## ##   ## ##      ##         ##    ** "<<endl;
cout<<"                ** ##       #######  ######  #####   #####   ######     ##      ##   ## ##  ##  ## ##  ##  ## #####   ##         ##    ** "<<endl;
cout<<"                ** ##       ##   ##  ## ##   ##      ##      ## ##      ##      ##   ## ##   ## ## ##   ## ## ##      ##         ##    ** "<<endl;
cout<<"                ** ##       ##   ##  ##  ##  ##      ##      ##  ##     ##      ##   ## ##    #### ##    #### ##      ##         ##    ** "<<endl;
cout<<"                **  ######  ##   ##  ##   ## ####### ####### ##   ##     ######  #####  ##     ### ##     ### #######  ######    ##    ** "<<endl;
cout<<"                ************************************************************************************************************************* "<<endl;

}

void choices()
{
cout<<"                                                                                                                                          "<<endl;
cout<<"                                                                                                                                          "<<endl;
cout<<"                                                                       1.SIGN UP                                                          "<<endl;
cout<<"                                                                                                                                          "<<endl;
cout<<"                                                                        2.LOGIN                                                           "<<endl;
cout<<"                                                                                                                                          "<<endl; 
}



void enterchoice()
{
  system("cls");
  printmenu();
  choices();
  int choice;
  x=67,y=18;
  gotoxy(x,y);
  cout<<"Enter your choice: ";
  cin>>choice;
   if(choice==1)
  {
   x=58,y=16;
   system("cls");
   printmenu();
   gotoxy(x,y);
   cout<<"Enter your Gmail Account: ";
   cin>>gmail;
   gotoxy(x+5,y+3);
   cout<<"Choose Password: ";
   cin>>password;
   gotoxy(x+8,y+6);
   cout<<"Account Created!";
  }
   if(choice==2)
  {
   system("cls");
   printmenu();
   x=58,y=16;
   gotoxy(x,y);
   cout<<"Enter your gmail to login: ";
   cin>>lgmail;
   gotoxy(x+3,y+2);
   cout<<"Enter your password: ";
   cin>>lpassword;
   if(lgmail==gmail && lpassword==password)
   {
    gotoxy(x+3,y+4);
    cout<<"Login Successfully...";
    status();
   }
   else
   {
    gotoxy(x+1,y+4);
    cout<<"You have not sign up your account!";  
   }
   }

}      

void status()
{
   system("cls");
   printmenu();
   x=58,y=16;
   gotoxy(x,y);
   cout<<"ARE YOU AN EMPLOYEE OR EMPLOYER??: ";
   cin>>stat;
   if(stat=="EMPLOYEE")
   {
    e1portfolio();
   }
   if(stat=="EMPLOYER")
   {
    x=55,y=18;
    gotoxy(x,y);
    cout<<"WHAT KIND OF JOBS YOU'RE OFFERING??: ";
    cin>>offer;
   }
}

void e1portfolio()
{
    int x=40,y=20;
    gotoxy(x,y);
    cout<<"NAME: ";
    cin>>name;
    gotoxy(x,y+2);
    cout<<"AGE:  ";
    cin>>age;
    gotoxy(x,y+4);
    cout<<"CITY: ";
    cin>>city;
    gotoxy(x,y+6);
    cout<<"EDUCATION: "<<endl;
    gotoxy(x,y+8);
    cin>>edu;
    gotoxy(x,y+9);
    cin>>school;
    gotoxy(x,y+10);
    cin>>grade1;
    gotoxy(x,y+12);
    cin>>edu1;
    gotoxy(x,y+13);
    cin>>clg;
    gotoxy(x,y+14);
    cin>>grade2;
    gotoxy(x,y+16);
    cin>>edu2;
    gotoxy(x,y+17);
    cin>>uni;
    gotoxy(x,y+18);
    cin>>gpa;
}   
        