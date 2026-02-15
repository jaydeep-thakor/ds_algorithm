#include <iostream>
using namespace std;

int main(){

    // continue
    for(int i = 1; i<=5; i++){

        cout << " Hi " << endl;
        cout << " Hey " << endl;

        continue; // jump to next iteration

        cout << " Hello " << endl;

    }

    // break
    for(int i = 1; i<=5; i++){

        cout << " Hi " << endl;
        cout << " Hey " << endl;

        break; // exit loop completely

        cout << " Hello " << endl;
    }

}



