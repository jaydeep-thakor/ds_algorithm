#include <iostream>
using namespace std;

bool findPrime(int n){

    if(n < 2) return false;

    for(int i = 2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;

}

int main(){

bool ans = findPrime(10);

if(ans){
    cout << "prime number" << endl;
}else{
    cout << "not a prime number" << endl;
}


}
