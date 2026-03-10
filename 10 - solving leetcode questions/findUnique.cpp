#include <iostream>
using namespace std;

int main(){

    int arr[7] = {3,7,2,1,3,2,1};

    int size = sizeof(arr) / sizeof(int);
    int answer = 0;
    
    for(int i = 0; i<size; i++){
        answer = answer ^ arr[i];
    }

    cout << answer << endl;


}
