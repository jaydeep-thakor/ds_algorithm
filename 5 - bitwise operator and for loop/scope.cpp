#include <iostream>
using namespace std;

int main(){

    int a = 3;
    cout << a << endl;

    if(true){
        int a = 5;
        cout << a << endl;
        // int b = 10; //blocked scope
    }

    cout << a << endl;
    // cout << b << endl; // error
 
}
