#include <iostream>
using namespace std;
int main() {
    int x,y,z;
    float avg;
    cout << "please enter 3 number: ";
    cin >> x >> y >> z;
    cout << "avg is: " << static_cast<float>(x+y+z)/3;
    cin.ignore();
    cin.get();
}
// میانگین 3 عدد