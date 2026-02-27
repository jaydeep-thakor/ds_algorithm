#include <iostream>
using namespace std;

void printArr(int arr[], int size){

    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}

void swapAlternate(int arr[], int size){

    for(int i = 0; i<size; i+=2){
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }

}

int main(){

    int evenArr[10] = {2,7,3,6,1,8,5,7,3,7};
    int oddArr[7] = {3,7,4,2,7,4,6};

    // swap even arr
    swapAlternate(evenArr, 10);
    printArr(evenArr, 10);

    // swap odd arr
    swapAlternate(oddArr, 7);
    printArr(oddArr, 7);

}

