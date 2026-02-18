#include <iostream>
using namespace std;

int main(){

    int n = 123;

    int digits = 0;

    int answer = 0;

    while(n!=0){
        digits = n % 10;

        answer = (answer * 10) + digits;

        n = n / 10;
    }
    cout << answer;

}
