#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int num = 2932;
    int arr[4];
    int i = 0;

    while(num != 0){
        int digits = num % 10;
        arr[i]=digits;
        num = num / 10;
        i++;
    }

    int size = sizeof(arr) / sizeof(int);
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);

    int a = arr[0];
    int b = arr[1];
    int c = arr[2];
    int d = arr[3];

    for(int i = 0; i<size; i++){
        cout << arr[i];
    }

}
