#include <iostream>
using namespace std;

int main(){
    
    int arr[] = {0,1,2,3,2};
    int size = sizeof(arr)/sizeof(int);
    int ans = 0;
    
    for(int i = 0; i<size; i++){
        ans = ans ^ arr[i];
    }
    
    for(int j = 1; j<size; j++){
        ans = ans ^ j;
    }
    
    cout << ans << endl;
    
}
