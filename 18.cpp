#include <iostream>
using namespace std;
int main(){
	int i, num, sum = 0;
	const int n = 5;
	float avg;
	for (i=0; i < n;i++){
		cout << "enter a number" << i+1 << ":";
		cin >> num ;
		sum +=num;
		
	}
	avg = static_cast<float> (sum)/n;
	cout << "the average is: "<< avg;
}