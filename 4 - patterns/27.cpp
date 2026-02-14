// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1

#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    
    int i = 1;

    while(i<=n){

        // first triangle loop
        int j = 1;
        while(j<=n-i+1){
            cout <<  j;
            j = j + 1;
        }

        // second triangle loop
        int k = 1;
        
        while(k<=i-1){
            cout << "*"<<"*";
            k = k + 1;
        }
       

        // third triangle loop
        int l = 1;
        while(l<=(n-i+1)){
            cout << (n-i+1-l+1);
            l = l + 1;
        }

        cout << endl;
        i = i + 1;

    }    



}



