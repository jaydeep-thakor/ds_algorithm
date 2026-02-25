#include <iostream>
using namespace std;

int main(){

    // switch case only work for datatype int and char

    int number = 2;
    char ch = '2';

    switch(number){

        // case 1: { cout << "number one" << endl;\ }
        case 1: cout << "number one" << endl;
        break;

        case 2: cout << "number two" << endl;
        break; // if we do not write break here all later statements will be executed after the their condition is false

        default: cout << "default case" << endl; // default case not mendatory

    }


}

// switch inside switch case
// int num = 1;
// int i = 1;

// switch(num){

//     case 1: cout << "number 1" << endl;
//     break;
    
//     case 2: switch(i){
//         case 1: cout << "inner i" << endl;
//         break;
//     }
//     break;

//     case 3: cout << "number 2" << endl;
//     break;

//     default : cout << "default case" << endl;

//     }

// }