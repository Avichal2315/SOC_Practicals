#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#include <ctime>

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return (fibonacci(n - 1) + fibonacci(n - 2));
    }
}

int fib(int n)
{
    //  time_t begin, end;
    // time(&begin);
    int a = fibonacci(n);
    // time(&end);

    // cout << "Time required = " << difftime(end, begin) << " seconds";

    return a;
}

int main()
{

    DWORD dw1 = GetTickCount();

    long long a = fib(50);
    cout<<a;

    DWORD dw2 = GetTickCount();

    cout << "\nTime difference is " << (dw2 - dw1) << " milliSeconds" << endl;
}