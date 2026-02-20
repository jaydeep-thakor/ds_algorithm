// Given an integer n, return true if it is a power of two. Otherwise, return false.

// An integer n is a power of two if there exists an integer x such that:

#include <iostream>
using namespace std;

int main(){

int n;
cin>>n;

int ans = 1;

for(int i = 0; i<=30; i++){

    cout << ans << endl;

    if(n==ans){
        cout << "true" << endl;
        return 0;
    }

    if(ans <= INT_MAX/2)
    ans = ans * 2;

}

cout << "false" << endl;


}


