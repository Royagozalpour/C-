#include<stdio.h>
#include <iostream>
using namespace std;
bool prime ( int );
int main(){
    int num;
    char ans;
    while (true)
    {
        cout << "\n please enter a number: ";
        cin >> num;
        if (prime(num))
         cout << "num is prime.";
        else 
         cout << "num isn't prime. ";
        cout << "\nDo you want to continue? ";
        cin >> ans;
        if (ans!='y')
         break;

    }
    cin.get();
    
}
bool prime (int num){
    int i, temp = 1;
    for (i = 2; (i <= num/2) && temp ; i++)
      if (num % i == 0 )
          temp = 0 ;
    return temp;
}