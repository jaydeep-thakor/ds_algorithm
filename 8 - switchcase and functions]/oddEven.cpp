#include <iostream>
using namespace std;

bool isEven(int a){
    if(a&1){
        return 0;
    }
    return 1;
}

int main(){

    int n = 10;

    if(isEven(n)){
        cout << "Even number";
    }else{
        cout << "Odd number";
    }

}
