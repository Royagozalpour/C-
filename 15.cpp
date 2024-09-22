#include<stdio.h>
#include <iostream>
using namespace std;
void convert(void);
int main(){
    convert();
    cin.get();
}
void convert(void){
int hours, minutes, seconds;
long int time;
cout << "enter time to be convert : ";
cin >> hours >> minutes >> seconds;
time = (60*hours + minutes)*60 +seconds;
cout << "\n time is " << time << " seconds.";
cin.get();
}
