#include <iostream>

using namespace std;
/*
Euclide's algorithm for finding the greatest common divisor of two numbers: a and b
*/
int computeGCD(int a, int b){
    if (a > b)
        return (b, a % b);
    else
        return (a, b % a);
}

int main()
{
    cout << computeGCD(10, 15);
    return 0;
}
