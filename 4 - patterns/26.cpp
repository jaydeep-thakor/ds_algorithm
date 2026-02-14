//      1
//     121
//    12321
//   1234321  

#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i = 1;

    while(i<=n){
        
        // loop for space
        int space = n - i;
        while(space){
            cout << " ";
            space = space - 1;
        }

        // loop 1st triangle
        int j = 1;
        while(j<=i){
            cout << j;
            j = j + 1;
        }

        // loop 2nd triangle
        // int k = 1;
        // while(k<=(i-1)){
        //     cout << i - k - 1 + 1;
        //     k = k + 1;
        // }  
        int start = i - 1;
        while(start){
            cout << start;
            start = start -1;
        }  


        cout<< endl;
        i = i + 1;


    }



}



