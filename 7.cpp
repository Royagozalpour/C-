#include <iostream>
using namespace std;
int main(){
    char ch;
    int code;
    for(ch = 'a'; ch <= 'f'; ch++){
        code = ch;
        cout << "ch: " << ch << " code: " << code << endl;
    }
    cin.get();
}