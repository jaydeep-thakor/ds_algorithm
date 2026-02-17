// approach 1

// n = 7

// 7/2 = 3  / remainder 1
// 3/2 = 1  / remainder 1
// 1/2 = 0  / remainder 1

// 1                    1                    1
// 2(power(2))          2(power(1))          2(power(0))
// 4                    2                    1                  addition is 7


// approach 2

#include <iostream>
using namespace std;

int main() {

    int n = 10;

    while(n != 0){
        int bit = n & 1;   // get last bit
        cout << bit;       // print it
        n = n >> 1;        // remove last bit
    }
    // 0101 -> 1010
    // now reverse the output to get final answer

}



