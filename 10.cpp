#include <iostream>
using namespace std;
int main(){
    int x, sum =0, n = 0;
    char ans = 'y';
    while(ans == 'y') {
        cout << "please enter a number: " << endl;
        cin >> x;
        sum += x*x;
        n++;
        cout << " do you want to continue? (y/n))" << endl;
        cin >> ans;

    }
    cout << "\n your entered number: " << n << " numbers: "<< endl;
    cout << "\n sum of sqrts: " << sum;
    cin.get();
}