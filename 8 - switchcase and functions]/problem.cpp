// create a mini calculator

// i/p = a,b,expression
    // = 7,8, + / - / / / *
// o/p = 7 * 8 = 56

#include <iostream>
using namespace std;

int main(){

    int a,b;
    char ch;
    
    cout << "Enter the value of a = ";
    cin >> a;

    cout << "Enter the value of b = ";
    cin >> b;

    cout << "Enter the Operator = ";
    cin >> ch;

    switch(ch){
        
        case '*': cout << (a*b) << endl;
        break;

        case '-': cout << (a-b) << endl;
        break;

        case '/': cout << (a/b) << endl;
        break;

        case '+': cout << (a+b) << endl;
        break;

        case '%': cout << (a%b) << endl;
        break;

        default : cout << "Enter a valid operator";

    }

}

