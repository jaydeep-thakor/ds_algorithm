#include <iostream>
using namespace std;

int printMin(int num[], int arrSize){

    int maxInt = INT_MAX;

    for(int i = 0; i<arrSize; i++){
        if(num[i] < maxInt){
            maxInt = num[i];
        }
    }

    return maxInt;

}

int printMax(int num[], int arrSize)
{

    int  minInt = INT_MIN;

    for (int i = 0; i < arrSize; i++)
    {
        if(num[i]>minInt){
            minInt = num[i];
        }
    }

    return minInt;

}

int main()
{

    int size;
    cin >> size;

    int numArr[20];

    for (int i = 0; i < size; i++)
    {
        cin >> numArr[i];
    }

    cout << "max value is " << printMax(numArr, size) << endl;
    cout << "min value is " << printMin(numArr, size) << endl;

}
