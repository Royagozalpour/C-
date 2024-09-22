#include <iostream>
using namespace std;
int main() {
    int i, sum = 0, num;
    float avg;
    const int n = 5;
    for(i = 0; i < n; i++) {
        cout << "please enter a number: " << i+1 << ": ";
        cin >> num;
        sum+=num;
    }
    cout << "the average is: " << static_cast<float> (sum)/n;
    cin.ignore();
    cin.get();




}