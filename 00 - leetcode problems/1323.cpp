#include <iostream>
using namespace std;

int main(){

    int num = 9669;
    int reverse = 0;
    while(num != 0){
        int digits = num % 10;
        reverse = reverse * 10 + digits;
        num = num / 10;
    }

    bool isTrue = true;
    int number = 0;

    while(reverse != 0){
        int digits = reverse % 10;
        if(digits==6 && isTrue){
            digits=9;
            isTrue = false;
        }
        number = number * 10 + digits;
        cout << digits << endl;
        reverse = reverse / 10;
    }

    cout << number << endl;


}
