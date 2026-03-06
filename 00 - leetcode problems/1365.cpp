#include <iostream>
using namespace std;

int main(){

    int arr[5] = {8,1,2,2,3};
    int size = sizeof(arr) / sizeof(int);
    

    for(int i = 0; i<size; i++){
        int count1 = 0;
    int count2 = 0;
        int temp = arr[i];

        for(int j = 0; j<size; j++){    
            if(temp > arr[j]){
                count1 = count1 + 1;
            }
        }
cout << "***************************** iteration " << (i+1)  << "*****************************" << endl; 
    cout << "count1 is " << count1 << endl; 
    cout << "count2 is " << count2 << endl; 

    }



}
