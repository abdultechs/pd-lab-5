#include<iostream>
using namespace std;
int x =10;
void myFunction()
{
    cout << x;
   int x=20;
}
main()
{
    myFunction();
    x=30;
    cout <<x;
    myFunction();
}