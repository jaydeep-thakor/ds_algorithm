#include <iostream>
using namespace std;

int main(){

    int a,b;

    cout << "Enter value of A = " << endl;
    cin>>a;
    
    cout << "Enter value of B = " << endl;
    cin>>b;

    if(a>b){
        cout << "A is grather than B" << endl; 
    }else if(b>a){
        cout << "B is grather than A" << endl;
    }else{
        cout << "The number is similar" << endl;
    }

}
