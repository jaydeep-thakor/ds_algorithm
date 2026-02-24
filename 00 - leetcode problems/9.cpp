#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int number = 10;

    int reverseNumber = 0;

    int digits;

    int n = number;

    int i = 0;

    while (n != 0)
    {
        digits = n % 10;
        reverseNumber = reverseNumber * 10 + digits;
        n = n / 10;
        i++;
    }

    cout << "number is =" << number << endl;
    cout << "reverseNumber is =" << reverseNumber << endl;

    if (reverseNumber == number)
    {
        cout << "jd" << endl;
    }
    else
    {
        cout << "jaydeep" << endl;
    }
}