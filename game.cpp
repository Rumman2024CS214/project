#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void printoptions();
int  choices();
void printheader();
void character();
void emptycharacter();
void moveplayerleft();
void moveplayerup();
void moveplayerdown();
void moveplayerright();
void boundary();
void printgoal();
void emptygoal();
void movegoal();
void ball();
char getCharAtxy(short int x,short int y);
int x=2,y=32;
int bx=27,by=37;
int gx=132,gy=30;
main()
{ 
  int choice;
  choice=choices();
  if(choice==1)
  {
   Sleep(100);
   system("cls");
   boundary();
   character();
   ball();
   printgoal();
   while(true)
   {
   if(GetAsyncKeyState(VK_RIGHT))
   {
    moveplayerright();
   }
   if(GetAsyncKeyState(VK_LEFT))
   {
    moveplayerleft();  
   }
   if(GetAsyncKeyState(VK_UP))
   {
    moveplayerup();
   }
   if(GetAsyncKeyState(VK_DOWN))
   {
    moveplayerdown();
   }
   }
   movegoal();
  if(choice==4)
  {
   return 0;
  }
  }
}
  
void gotoxy(int x,int y)
{
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}



void printoptions()
{
  cout<<"                                                                   1. NEW GAME                                                            "<<endl;
  cout<<"                                                                                                                                          "<<endl;
  cout<<"                                                                   2. LOAD GAME                                                           "<<endl;
  cout<<"                                                                                                                                          "<<endl;
  cout<<"                                                                   3.  OPTIONS                                                            "<<endl;
  cout<<"                                                                                                                                          "<<endl;
  cout<<"                                                                    4.  EXIT                                                              "<<endl;
  cout<<"                                                                                                                                          "<<endl;
}                                            


void printheader()
{
cout<<"            _______________________________________________________________________________________________________________________________ "<<endl;
cout<<"            |                                                                                                                              |"<<endl;
cout<<"            |    ##      ##  ##########   ########  ##      ##        ##########  ############       ##########  ###          ##       ##  |"<<endl; 
cout<<"            |    ##     ##       ##      ##         ##     ##             ##           ##                ##      ## #         ##       ##  |"<<endl;
cout<<"            |    ##    ##        ##      ##         ##    ##              ##           ##                ##      ##  #        ##       ##  |"<<endl; 
cout<<"            |    ##   ##         ##      ##         ##   ##               ##           ##                ##      ##   #       ##       ##  |"<<endl;
cout<<"            |    ##  ##          ##      ##         ##  ##                ##           ##                ##      ##    #      ##       ##  |"<<endl;
cout<<"            |    #####           ##      ##         #####                 ##           ##                ##      ##     #     ##       ##  |"<<endl;
cout<<"            |    ##  ##          ##      ##         ##  ##                ##           ##                ##      ##      #    ##       ##  |"<<endl;
cout<<"            |    ##   ##         ##      ##         ##   ##               !#           ##                ##      ##       #   ##       ##  |"<<endl;
cout<<"            |    ##    ##        ##      ##         ##    ##              ##           ##                ##      ##        #  ##           |"<<endl;
cout<<"            |    ##     ##       ##      ##         ##     ##             ##           ##                ##      ##         # ##       @@  |"<<endl;
cout<<"            |    ##      ##  ##########   ########  ##      ##        ##########       ##            ##########  ##          ###       @@  |"<<endl;
cout<<"            |______________________________________________________________________________________________________________________________|"<<endl;
cout<<"                                                                                                                                            "<<endl; 
cout<<"                                                                                                                                            "<<endl;
cout<<"                                                                                                                                            "<<endl;
}

int choices()
{
  system("cls");
  printheader();
  printoptions();
  int ch;
  int x,y;
  x=65,y=25;
  gotoxy(x,y);
  cout<<"ENTER CHOICE: ";
  cin>>ch;
  return ch;
}  

void boundary()
{
 cout<<"########################################################################################################################################################"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"##                                                                                                                                                    ##"<<endl;
 cout<<"########################################################################################################################################################"<<endl;
}

void character()
{
gotoxy(x,y); 
cout<<"      .:--:.                                                                        "<<endl;
gotoxy(x,y+1);
cout<<"     :: . .::                                                                       "<<endl;
gotoxy(x,y+2);
cout<<"     ':  - :'                                                                       "<<endl;
gotoxy(x,y+3);
cout<<"      ''''''                                                                        "<<endl;
gotoxy(x,y+4);
cout<<"        ||                                                                          "<<endl;
gotoxy(x,y+5);
cout<<"       /||\\                                                                        "<<endl;
gotoxy(x,y+6);
cout<<"      / || \\                                                                       "<<endl;
gotoxy(x,y+7);
cout<<"        ||                                                                          "<<endl;
gotoxy(x,y+8);
cout<<"       /  \\                                                                        "<<endl;
gotoxy(x,y+9);
cout<<"      /    \\                                                                       "<<endl;
}

void emptycharacter()
{
gotoxy(x,y); 
cout<<"                                                                                    "<<endl;
gotoxy(x,y+1);
cout<<"                                                                                    "<<endl;
gotoxy(x,y+2);
cout<<"                                                                                    "<<endl;
gotoxy(x,y+3);
cout<<"                                                                                    "<<endl;
gotoxy(x,y+4);
cout<<"                                                                                    "<<endl;
gotoxy(x,y+5);
cout<<"                                                                                    "<<endl;
gotoxy(x,y+6);
cout<<"                                                                                    "<<endl;
gotoxy(x,y+7);
cout<<"                                                                                    "<<endl;
gotoxy(x,y+8);
cout<<"                                                                                    "<<endl;
gotoxy(x,y+9);
cout<<"                                                                                    "<<endl;
}

void moveplayerright()
{
if(getCharAtxy(x+110,y)==' ')
{
 Sleep(200);
 emptycharacter();
 x=x+1;
 character();
}
}

void moveplayerleft()
{
if(getCharAtxy(x-1,y)==' ')
{
Sleep(200);
emptycharacter();
x=x-1;
character();
}
}

void moveplayerup()
{
if(getCharAtxy(x,y-20)==' ')
{
Sleep(200);
emptycharacter();
y=y-1;
character();
}
}

void moveplayerdown()
{
if(getCharAtxy(x,y+1)==' ')
{
Sleep(200);
emptycharacter();
y=y+1;
character();
}
}

char getCharAtxy(short int x,short int y)
{
  CHAR_INFO ci;
  COORD xy={0,0};
  SMALL_RECT rect={x,y,x,y};
  COORD coordBufSize;
  coordBufSize.X=1;
  coordBufSize.Y=1;
  return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci,coordBufSize,xy,&rect) ? ci.Char.AsciiChar:' ';
}


void printgoal()
{
  gotoxy(gx,gy);
  cout<<" _______________ "<<endl;
  gotoxy(gx,gy+1);
  cout<<"|***************|"<<endl;
  gotoxy(gx,gy+2);
  cout<<"|***************|"<<endl;
  gotoxy(gx,gy+3);
  cout<<"|***************|"<<endl;
  gotoxy(gx,gy+4);
  cout<<"|***************|"<<endl;
  gotoxy(gx,gy+5);
  cout<<"|***************|"<<endl;
  gotoxy(gx,gy+6);
  cout<<"|***************|"<<endl;
  gotoxy(gx,gy+7);
  cout<<"|***************|"<<endl;
  gotoxy(gx,gy+8);
  cout<<"|***************|"<<endl;
  gotoxy(gx,gy+9);
  cout<<"|***************|"<<endl; 
  gotoxy(gx,gy+10);
  cout<<"|_______________|"<<endl;
}

void emptygoal()
{
  gotoxy(gx,gy);
  cout<<"                 "<<endl;
  gotoxy(gx,gy+1);
  cout<<"                 "<<endl;
  gotoxy(gx,gy+2);
  cout<<"                 "<<endl;
  gotoxy(gx,gy+3);
  cout<<"                 "<<endl;
  gotoxy(gx,gy+4);
  cout<<"                 "<<endl;
  gotoxy(gx,gy+5);
  cout<<"                 "<<endl;
  gotoxy(gx,gy+6);
  cout<<"                 "<<endl;
  gotoxy(gx,gy+7);
  cout<<"                 "<<endl;
  gotoxy(gx,gy+8);
  cout<<"                 "<<endl;
  gotoxy(gx,gy+9);
  cout<<"                 "<<endl; 
  gotoxy(gx,gy+10);
  cout<<"                 "<<endl;
}

void movegoal()
{
  while(gy!=3)
  {
  Sleep(200);
  emptygoal();
  gy=gy-1;
  printgoal();
  if(gy==3)
  {
  while(gy!=30)
  {
  Sleep(200);
  emptygoal();
  gy=gy+1;
  printgoal();
  }
  }
  }
}


void ball()
{
  gotoxy(bx,by);
  cout<<"  .:::::.   "<<endl;
  gotoxy(bx,by+1);
  cout<<" .:::::::.  "<<endl;
  gotoxy(bx,by+2);
  cout<<" :::::::::  "<<endl;
  gotoxy(bx,by+3);
  cout<<"  :::::::   "<<endl;
  gotoxy(bx,by+4);
  cout<<"   '''''    "<<endl;
}