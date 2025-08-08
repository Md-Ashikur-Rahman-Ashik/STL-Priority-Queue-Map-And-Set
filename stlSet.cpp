#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> integerSet;

    // 10
    // 2 3 4 2 3 5 1 6 8 2

    int numberOfInput;
    cin >> numberOfInput;

    for (int i = 0; i < numberOfInput; i++)
    {
        int inputValue;
        cin >> inputValue;
        integerSet.insert(inputValue);
    }

    // for (auto it = integerSet.begin(); it != integerSet.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    if (integerSet.count(4))
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    return 0;
}