#include <iostream>
using namespace std;

void printArray(int n[], int size){

    for(int i = 0; i < size; i++){
        cout << n[i] << " ";
    }
    
}

int main(){

// {0} sets every value in the array to 0.
// {1} would set only the first value to 1,
// and all other values would still be 0.
// int numbers[100] = {0};

// if I write {1} and give 10 array size i will like 1 0 0 0 0 0 0 0 0 0
// int number1[10] = {1};

// the size of arr is 100 but we only provided 1,2,3,4 in this case remainig values will be 0
// int arr[100] = {1,2,3,4};
// int size = sizeof(arr) / sizeof(arr[0]);
// for(int i = 0; i<size; i++){
//     cout << arr[i] << " ";
// }

int numberArr[50] = {1,78,135,634};
int numberArrSize = sizeof(numberArr) / sizeof(int); // per block the size is 4 so 50*4 = 200, and size of type int is 4 = 200/4 = 50
printArray(numberArr, numberArrSize);


char chArr[7] = {'j','a','y','d','e','e','p'};
char chArrSize = sizeof(chArr) / sizeof(char);

cout << endl << "printing char array starts" << endl;
for(int i = 0; i<chArrSize; i++){
    cout << chArr[i] << " ";
}
cout << endl << "printing char array ends" << endl;

double doubleArr[24];
float floatArr[7];
bool boolArr[2];


}



