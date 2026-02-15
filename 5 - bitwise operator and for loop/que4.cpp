#include <iostream>
using namespace std;

int main(){
    int a = 1;
    int b = a++; // 1, a = 2
    int c = ++a; // 3, a = 3
    cout << b; // 1
    cout << c; // 3
}
