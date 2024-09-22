#include <iostream>
using namespace std;
int main(){
    bool done = true;
    char ch;
    while (done) {
        cout << "\nplease enter a character: ";
        cin >> ch;
        if (ch == '&'){
            done = false;
            continue;

        }
        cout << "you typed char: "<< ch;
        ch = ch +1;
        cout << ", next char is: " << ch << endl;

    }
cin.get();
}