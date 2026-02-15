#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    // initialization, condition, updation
    // for(int i = 1; i<=n; i++){
    //     cout << i << endl;;
    // }



    // for loop can be written like this too
    // initialization, condition, updation none of them is mandatory

    int i = 1;

    for(;;){

        if(i<=n){
            cout << i << endl;            
        }else{
            break; // gets you out of current loop
        }
        i++;
        
    }


    // can be multiple initialization, condition, updation
    for(int a = 0, b = 1, c = 2; a>=0 && b>=1 && c>=2; a--,b--,c--){
        cout << a << " " << b << " " << c << endl;
    }

    // sum of 1 to n
    int input;
    cin>>input;
    int sum = 0;
    for(int i = 1; i<=input; i++){
        // sum = sum + i;
        sum += i;
    }

    cout << sum;

}

