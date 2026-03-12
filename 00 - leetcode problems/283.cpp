#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {0, 1, 0, 3, 12};
    int size = sizeof(arr) / sizeof(int);
    int index = 0;

    for (int i = 0; i < size; i++)
    {

        if (arr[i] != 0)
        {
            swap(arr[i], arr[index]);
            index++;
        }
    }

    for(int k = 0; k<size; k++){
        cout << arr[k] << endl;
    }

}
