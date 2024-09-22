#include<stdio.h>
#include <iostream>
using namespace std;
void findmax(int, int, int);
int  main(){
    int x,y,z;
    cout << "please enter three integer number: ";
    cin >> x >> y >> z;
    findmax(x, y, z);
    cin.get();

}
void findmax(int p1, int p2, int p3){
    int maxp;
    maxp = (p1 > p2) ? p1 : p2;
    maxp = (p3 > maxp ) ? p3 : maxp;
    cout << "\n maximum is "<<maxp;
    cin.get();
    
}
