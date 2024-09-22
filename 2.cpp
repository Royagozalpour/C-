#include <iostream>
using namespace std;
#define NUM  6
int main(){
	float sum, x;
	int count; 
	for (sum = 0, x = 1;count <= NUM ;count++,  x *=2){
		 sum += 1/x;
	    cout << sum << cout << endl;
	}
	cin.get();
	 
	
}
