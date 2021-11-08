#include <iostream>
#include "poole.h"
#include <string>
using namespace std;

int main() {
  int x = 0;
  char op = ' ';
  int y = 0;
  cout<<"Enter integer:\n";
  cin>>x;
  cout<<"Enter operation(+,-,*,/,%,&,|,^):\n";
  cin>>op;
  cout<<"Enter second integer:\n";
  cin>>y;
  framedbox(1, 10, 7, 75, '#');
  gotoxy(3,13);
  //cue bad design
  cout << x << op << y << " = "; 
  switch(op) {
    case '+':
      cout << x+y;
    break;
    case '-':
      cout << x-y;
    break;
    case '*':
      cout << x*y;
    break;
    case '/':
      cout << x/y;
    break;
    case '%':
      cout << x%y;
    break;
    case '&':
      gotoxy(3,13);
      cout << "                                               ";
      gotoxy(3,12);
      cout << x << op << y << (x&y); 
      gotoxy(3,14);
      
    break;
    case '|':
      cout << (x|y);
    break;
    case '^':
      cout << (x^y);
      gotoxy(3,14);
      cout << "Note: this is bitwise XOR, not power";
    break;
  }
  gotoxy(0,18);
} 