// Number of Steps to Reduce to Zero

// 👉 Rules:

// if even → divide by 2

// if odd → subtract 1

// Count how many steps until number becomes 0

// Example:
// 14 → 7 → 6 → 3 → 2 → 1 → 0
// Steps = 6

// Idea:
// Loop until n == 0

#include <iostream>
using namespace std;

int main(){

    int n = 14;
    int count = 0;

    while(n!=0){

        if(n%2==0){
            n = n/2;
        }else{
            n = n-1;
        }

        count = count + 1;

        cout << n << endl;

    }

    cout << "count is" << count;

}

