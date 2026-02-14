// * * * *
//   * * * 
//     * *
//       *

#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i = 1;

    while(i<=n){


        // loop for space
        int space = i - 1;
        while(space){
            cout << " ";
            space = space - 1; 
        }

        // loop for *
        int j = 1;
        int count = n - i + 1;
        while(j<=count){
            cout << "*";
            j = j + 1;
        }

        cout << endl;
        i = i + 1;

    }

}





