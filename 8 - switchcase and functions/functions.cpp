#include <iostream>
using namespace std;

    // ******************** 1st way ********************
    // int power(int x, int y){
    //     int answer = 1;
    //     for(int i = 1; i<=y; i++){
    //         answer = answer * x;
    //     }
    //     return answer;
    // }

    // ******************** 2nd way ********************
    int power(){
        int a,b;
        cin>>a;
        cin>>b;

        int answer = 1;
        for(int i = 1; i<=b; i++){
            answer = answer * a;
        }
        return answer;
    }


int main(){

    // ******************** 1st way ********************
    // int a,b;
    // cout << "enter the value of a = " << endl;
    // cin>>a;
    // cout << "enter the value of b = " << endl;
    // cin>>b;
    // int finalPower = power(a,b);
    // cout << finalPower << endl;

    // ******************** 2nd way ********************

    int finalAnswer = power();
    cout << finalAnswer << endl;

}