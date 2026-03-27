#include <iostream>
using namespace std;

int main(){
    
    int arr[] = {1,1,2,2,3,3,4,4,5};
    int size = sizeof(arr) / sizeof(int);
    
    int unique = 0;
    
    for(int i = 0; i<size; i++){
        
        unique = unique ^ arr[i];
        
    }
    
    cout << unique << endl;
    
}
