//        1
//      2 3
//    4 5 6
// 7 8 9 10

#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    
    int i = 1;
    int count = 1;
    while(i<=n){
        
        // loop for space
        int space = n - i;
        while(space){
            cout << " ";
            space = space - 1;
        }

        // loop for printing numbers
        int j = 1;
        while(j<=i){
            cout << count;
            j = j + 1;
            count = count + 1;
        }
        cout << endl;
        i = i + 1;

    }



}

