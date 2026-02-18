#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n = 1000000110;

    int bits;

    int answer = 0, i = 0;

    while(n!=0){

        bits = n % 10;
        
        if(bits == 1){
          answer = answer + pow(2,i);  
        }

        i = i + 1;
        n = n / 10;
        
    }

    cout << answer;
    

}
