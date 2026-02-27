#include <iostream>
using namespace std;

void reverseArr(int arr[], int size)
{

    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArr(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[15] = {
        1, 2, 3, 4, 5,
        6, 7, 8, 9, 10,
        11, 12, 13, 14, 15};

    int brr[15] = {
        42, 7, 89, 13, 56,
        21, 90, 3, 67, 18,
        74, 29, 11, 50, 6};

    reverseArr(arr, 15);
    reverseArr(brr, 15);

    printArr(arr, 15);
    printArr(brr, 15);
}
