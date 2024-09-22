#include <iostream>
using namespace std;
int main(){
    int count = 0;
    cout << "please enter statement: " << endl;
    while(cin.get() != '\n')
        count++;
    cout << " length of statement is: " << count;
    cin.get();


}