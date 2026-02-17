#include <iostream>
using namespace std;

int main(){

    int n = 4232;

    cout << "Initial n = " << n << endl;
    cout << "------------------------" << endl;

    while(n != 0){

        cout << "Current n = " << n << endl;

        int rem = n % 10;
        cout << "rem = n % 10 = " << rem << endl;

        n = n / 10;
        cout << "n = n / 10 = " << n << endl;

        cout << "------------------------" << endl;
    }

}
