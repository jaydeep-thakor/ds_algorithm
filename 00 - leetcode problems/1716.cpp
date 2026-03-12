#include <iostream>
using namespace std;

int main(){

    int n = 20;
    int index = 1;
    int count = 1;
    int answer = 0;
    int total = 0;

    for(int i = 1; i<=n; i++){

        if(index <= 7){
            total = total + 1;
            answer = answer + total;
            if(index == 7){
                index = 1;
                total = count;
                count = count + 1;
            }else{
                index++;
            }
        }
    }

    
            cout << answer << endl;

}

