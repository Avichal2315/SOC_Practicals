#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of stones";
    cin >> n;
    priority_queue<int> stone_size;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        stone_size.push(temp);
    }

    while (stone_size.size() > 1)
    {
        int a = stone_size.top();
        stone_size.pop();
        a = a - stone_size.top();
        stone_size.pop();
        stone_size.push(a);
    }

    

    if (stone_size.top() == 0 || stone_size.empty())
    {
        cout << "No stone left";
    }
    else
        cout << "\nremaining stone size :" << stone_size.top() << "\n\n";
}