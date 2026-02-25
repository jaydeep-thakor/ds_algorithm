#include <iostream>
using namespace std;

// Return type = void (nothing)
// Use void when function just does an action:

// function signature
void printingNumber(int n){
    // function body

    for(int i=1; i<=n; i++){
        cout << i << endl;
    }

}

int main(){

printingNumber(10);
    
}
