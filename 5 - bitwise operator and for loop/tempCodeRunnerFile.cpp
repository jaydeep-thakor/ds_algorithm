#include <iostream>
using namespace std;

int main(){

    int n = 4232;

    while(n!=0){

        int rem = n%10;
        cout << rem << endl;;

        n = n/10;
    }


}
