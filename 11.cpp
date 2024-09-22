#include <iostream>
using namespace std;
int main(){
   int num, digit;
   while (true){
       cout << "\n please enter num: ";
       cin >> num;
       cout << "inverse: ";
       do {
           digit = num % 10;
           cout << digit;
           num /= 10;
       } while (num != 0);

   }
}