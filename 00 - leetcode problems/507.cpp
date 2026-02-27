#include <iostream>
using namespace std;

int main(){

    int n = 28;
    int sum = 0;

    for(int i = 1; i<n; i++){

        if(n % i == 0){
            cout << i << endl;
            sum = sum + i;
        }

    }

    cout << sum << endl;


}
