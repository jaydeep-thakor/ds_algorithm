#include <iostream>
using namespace std;

int main(){
    
    int arr1[] = {1,4,6,7,4};
    int arr2[] = {4,3,9,1};
    
    int ans[5]; // max possible size
    int k = 0;
    
    int arr1Size = sizeof(arr1) / sizeof(int);
    int arr2Size = sizeof(arr2) / sizeof(arr2[0]);
    
    for(int i = 0; i < arr1Size; i++){
        int elem = arr1[i];
        
        for(int j = 0; j < arr2Size; j++){
            if(elem == arr2[j]){
                ans[k++] = elem;
                arr2[j] = -1; // mark used
                break;
            }
        }
    }   
    
    for(int i = 0; i < k; i++){
        cout << ans[i] << endl;
    }
}
