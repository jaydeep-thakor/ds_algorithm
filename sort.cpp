#include <iostream>
#include <algorithm>  // required for sort
#include <vector> // required for vector
using namespace std;

int main(){
    
    // sort using sort function in normal array
    int arr1[] = {2,3,1,5,9,7};
    int size = sizeof(arr1)/sizeof(int);
    sort(arr1, arr1+size);
    
    // sort using sort function in vector
    vector<int> arr2 = {5,3,1,2,1};
    sort(arr2.begin(), arr2.end());
    
    // manual way - selection sort
    int n;
    cin>>n;
    
    int arr3[n];
    
    for(int i = 0; i<n; i++){
        cin>> arr3[i];
    }
    
    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            if(arr3[j] < arr3[i]){
                int temp = arr3[j];
                arr3[j] = arr3[i];
                arr3[i] = temp;
            }
        }
    }
    
    for(int i = 0; i<n; i++){
        cout << arr3[i] << endl;
    }
    
    
    
}
