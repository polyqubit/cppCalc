#ifndef _POOLE_H_
#define	_POOLE_H_

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "conio.h"
#include <sstream>
#include <fstream>
#include <bitset>

using namespace std;

int random(int r);
int digits(int inp);
void gotoxy(short x, short y);
void drawbox(int x, int y,int width, int height, char sym);
void framedbox(int xcoord, int ycoord, int width, int height, char symbol);
void drawline(int length, int xcoord, int ycoord, char sym);
void bad(int x, int y, int z);

int random(int r){
	return rand()% r + 1;
}

int digits(int inp) {
  if(inp==0) {return 1;}
  int c = 0;
  while(inp!=0) {
    inp/=10;
    c++;
  }
  return c;
}

void gotoxy(int x, int y)
{
    printf("%c[%d;%df", 0x1B, y, x);
}

//This makes a filled box
void drawbox(int x, int y,int width, int height, char sym){
	for(int j=0;j<width;j++){
		for(int i=0;i<height;i++){
            gotoxy(x+j,y+i);
			cout<<sym;
		}
	}
}

//This makes a framed box
void framedbox(int xcoord, int ycoord, int width, int height, char symbol){
	for(int zz = 0; zz<height; zz++){
		for(int aa = 0; aa<width; aa++){
		   gotoxy(zz +xcoord, ycoord +aa);
		   cout<<symbol;
		}
	}
	for(int ff = 1; ff<height-1; ff++){
		for(int ss = 1; ss<width-1; ss++){
			gotoxy(xcoord +ff, ycoord +ss);
			cout<<' ';
		}
	}
}

//This makes a line
void drawline(int length, int xcoord, int ycoord, char sym){
	for(int aa = 0; aa<length; aa++){
		gotoxy(xcoord +aa, ycoord);
		cout<<sym;
	}
}

void bad(int x, int y, int z, char op) {
  gotoxy(3,13);
  cout << "                                               ";
  gotoxy(3,11);
  cout << x << op << y << " = " << z; 
  gotoxy(3,13);
  cout << std::bitset<32>(x);
  gotoxy(3,14);
  cout << std::bitset<32>(y);
  gotoxy(3,15);
  cout << std::bitset<32>(z);
}

#endif