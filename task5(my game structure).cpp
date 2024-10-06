#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
void printMaze();
void printPlayer();
void erasePlayer();



int Px = 70 , Py = 25;

main()
{
    system("cls");
    printMaze();
    if (GetAsyncKeyState(VK_LEFT))
{
    // Move the Space Shooter Left
    while(1)
    {
    printPlayer();
    Sleep(200);
    erasePlayer();
    Px = Px - 1;
    }

}

if (GetAsyncKeyState(VK_RIGHT))
{
    // Move the Space Shooter Right
    while(1)
    {
    printPlayer();
    Sleep(200);
    erasePlayer();
    Px = Px + 1;
    }

}
    
    
}

void printMaze()
{
    cout<<"##################################################################################################################################"<<endl;
    cout<<"#                                    E                                                                                           #"<<endl;
    cout<<"#                                    ~                                                                                           #"<<endl;
    cout<<"#                                                                                                                                #"<<endl;
    cout<<"#                                                                                                                      <E        #"<<endl;
    cout<<"#                                                                                                                                #"<<endl;
    cout<<"#                                                                         |                                                      #"<<endl;
    cout<<"#                                                                         |                                                      #"<<endl;
    cout<<"#                                                                         |                                                      #"<<endl;
    cout<<"#                                                                         |                                                      #"<<endl;
    cout<<"#                                                                         |                                                      #"<<endl;
    cout<<"#                                                                         |                                                      #"<<endl;
    cout<<"#                                                                         |                                                      #"<<endl;
    cout<<"#                                                                         |                                                      #"<<endl;
    cout<<"#                                                                         |                                                      #"<<endl;
    cout<<"#                                                                         |                                                      #"<<endl;
    cout<<"#                                                                         |                                                      #"<<endl;
    cout<<"#                                                                         |                                                      #"<<endl;
    cout<<"#                                                                                                                                #"<<endl;
    cout<<"#                                                                                                                                #"<<endl;
    cout<<"#                                                                           ____________________________________________________ #"<<endl;
    cout<<"#                                                                                                                                #"<<endl;
    cout<<"#                                                                                                                                #"<<endl;
    cout<<"#                          |                                                                                                     #"<<endl;
    cout<<"#                          |                                                                                                     #"<<endl;
    cout<<"#   e>                     |                                                                                p                    #"<<endl;
    cout<<"#                          |                                                                                                     #"<<endl;
    cout<<"#                          |                                                                                                     #"<<endl;
    cout<<"#                          |                                                                                                     #"<<endl;
    cout<<"#                          |                                                                                                     #"<<endl;
    cout<<"#                          |                                                                                                     #"<<endl;
    cout<<"##################################################################################################################################"<<endl;
}
void printPlayer()
{
    gotoxy(Px, Py);  
    cout << "    ( 0  0 )    "<<endl;
    gotoxy(Px, Py+1);
    cout << "       \\/      "<<endl;
    gotoxy(Px, Py+2);
    cout << "        |       "<<endl;
    gotoxy(Px, Py+3);
    cout << "        |       "<<endl;
    gotoxy(Px, Py+4);
    cout << "       / \\     "<<endl;
    gotoxy(Px, Py+5);
    cout << "      /   \\    "<<endl;

}  
void erasePlayer()
{
   gotoxy(Px, Py);  
    cout << "               "<<endl;
    gotoxy(Px, Py+1);
    cout << "               "<<endl;
    gotoxy(Px, Py+2);
    cout << "               "<<endl;
    gotoxy(Px, Py+3);
    cout << "               "<<endl;
    gotoxy(Px, Py+4);
    cout << "               "<<endl;
    gotoxy(Px, Py+5);
    cout << "               "<<endl;

}  

void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}


