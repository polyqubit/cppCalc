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
      
    break;
    case '-':

    break;
    case '*':

    break;
    case '/':
      
    break;
    case '%':

    break;
    case '&':

    break;
    case '|':

    break;
    case '^':
    
    break;
  }
} 