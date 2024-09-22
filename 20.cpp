#include<stdio.h>
#include <iostream>
using namespace std;
void multiple(int, int);
int main(){
  int x,y;
  cout << "please enter two number: ";
  cin >> x >> y;
  multiple(x, y);
  cin.get();
}
void multiple(int x,int y){
  if (x%y == 0)
    cout << "x is multiple of y. ";
  else
    cout << "x isn't multiple of y. ";

}
