#include <bits/stdc++.h>
#include <windows.h>
#include <ctime>
using namespace std;

long long fibonacci(long long n, vector<long long> &v)
{
    if (v[n] != (-1))
        return v[n];

    if (n == 0)
    {
        v[0] = 0;
        return 0;
    }
    else if (n == 1)
    {
        v[1] = 1;
        return 1;
    }
    else
    {
        v[n] = fibonacci(n - 1, v) + fibonacci(n - 2, v);
    }

    return v[n];
}

int main()
{
    long long n;
    cin >> n;
    DWORD dw1 = GetTickCount();

    vector<long long> v(n + 1, -1);

    long long a = fibonacci(n, v);
    cout << a << endl;

    DWORD dw2 = GetTickCount();

    cout << "\nTime difference is " << (dw2 - dw1) << " milliSeconds" << endl;
    return 0;
}