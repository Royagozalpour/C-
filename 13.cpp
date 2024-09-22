#include <iostream>
using namespace std;
int main(){
    int grade;
    cout << "\nplease enter student grades: ";
    cin >> grade;
    while (grade != 0){
        if (grade >= 17 && grade <= 20)
            cout << "grade = " << grade << " score = " << 'A';
        else if (grade >= 15 && grade < 17)
            cout << "grade = " << grade << " score = " << 'B';
        else if (grade >= 12 && grade < 15)
            cout << "grade = " << grade << " score = " << 'C';
        else if (grade < 12)
            cout << "grade = " << grade << " score = " << 'D';
        cout << endl;
        cout << "\nplease enter student grades: ";
        cin >> grade;
    }
cin.get();
}