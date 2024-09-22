#include <iostream>
using namespace std;
#define num 6;
int main(){
    int i=1 ,j=1;
    while (i <= 6){
        i += 1;
        if(j <= i){
            cout << "*";
            j += 1;
        }
        cout << endl;
    }
    cin.get();
}
//season 2 - example 6
---------------------------------------------
#include <iostream>
using namespace std;
int main() {
    int i = 1, j = 1, n;
    cout << "please enter a number of line you want to print *: ";
    cin >> n;
    for (i; i <= n; i++) {
        for (j; j <= i; j++) {
            cout << "*";
        }
       cout << endl;
    }
    cin.get();
}
------------------------------------------
#include <iostream>
using namespace std;
int main(){

        int n;
        cout<<"Enter Count :";
        cin>>n;
         
        for(int i=1; i <=n ; i++){

              for(int j=1 ;  j <=i ; j++){
                cout<< "*";

              }
            cout<<endl;
}
}
----------------------------------
#include <iostream>
using namespace std;
int main(){
    int i=1 , j;
    while (i <= 6){
        j = 0;
        while(j < i){
            cout << "*";
            j += 1;
        }
        cout << endl;
        i += 1;
    }
    cin.get();
}

        }
---------------------------------
#include <iostream>
using namespace std;
int main(){
    int i=1 , j;
    while (i <= 6){
        j = 0;
        while(j < i){
            cout << "*";
            j += 1;
        }
        cout << endl;
        i += 1;
    }

    while (i >= 1 ){
        j = 0;
        while (j < i){
            cout << "*";
            j += 1;

        }
        cout << endl;
        i -= 1;
    }
    cin.get();
}