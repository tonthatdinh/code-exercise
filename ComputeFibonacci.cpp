#include <iostream>

using namespace std;

const int MAXN = 1000;

int Fib[MAXN];

int computeFibonacci(int n){
    Fib[1] = 1;
    Fib[2] = 1;
    for(int i = 3; i <= n; i ++)
        Fib[i] = Fib[i - 1] + Fib[i - 2];
    return Fib[n];
}

int main()
{
    cout << computeFibonacci(8);
    return 0;
}
