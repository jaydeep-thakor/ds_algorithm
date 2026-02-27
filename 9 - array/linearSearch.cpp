#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {

        if (arr[i] == key)
        {
            return 1;
        }
    }

    return 0;
}

int main()
{

    cout << "enter the element to search for = " << endl;
    int key;
    cin >> key;

    int arr[15] = {1, 5, 25, 7, 238, 74, 13, 783, 84, 18, 45, 19, 67, 233};

    bool found = search(arr, 15, key);

    if(found){
        cout << "key is present" << endl;
    }else{
        cout << "key is absent" << endl;
    }

}
