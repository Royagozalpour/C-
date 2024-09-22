#include <iostream>
using namespace std;
int main(){
    int x, y, i = 1, power =1;
    cout << "please enter base as integer: " ;
    cin >> x;
    cout << "please enter exponent as integer: ";
    cin >> y;
    while (i <= y){
        power *= x;
        i++;
    }
    cout << " x power of y is: " << power;
    cin.get();
}