#include <iostream>
using namespace std;

int main(){
    
    int arr[] = {8,7,8,9};
    int size = sizeof(arr)/sizeof(int);
    
    for(int i = 0; i<size; i+=2){
    
        if(i+1<size){
        int temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp;
        }
    
    }
    
    for(int j = 0; j<size; j++){
        cout << arr[j] << endl;
    }
    
}
