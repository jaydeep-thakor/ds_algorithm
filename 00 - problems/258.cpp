#include <iostream>
using namespace std;

int main()
{

    int n = 89;
    

while(n >= 10){
    int sum = 0;

    while(n > 0){
        int digit = n % 10;
        sum += digit;
        cout << sum << endl;
        n /= 10;
    }

    n = sum;
}
}

