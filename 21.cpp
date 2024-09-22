#include <iostream>
#define PI 3.14
using namespace std;
int main() {
    int radius;
    float perime, area;
    cout << "please enter radius: ";
    cin >> radius;
    cout << "ares is: " << PI*radius*radius << "\n";
    cout << "perime is: " << 2*PI*radius;
    cin.get();
