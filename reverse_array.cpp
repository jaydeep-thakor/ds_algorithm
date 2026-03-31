#include <iostream>
using namespace std;

int main(){
    
    int arr[] = {8,9,9,1,8,7};
    int size = sizeof(arr)/sizeof(int);
    
    int left = 0;
    int right = size - 1;
    
    while(left<right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    
    for(int i = 0; i<size; i++){
         cout << arr[i] << endl;
    }
    
}
