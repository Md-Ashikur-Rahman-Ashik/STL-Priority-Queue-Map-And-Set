#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> stringMap;
    stringMap["Tamim"] = 2;
    stringMap["Ramim"] = 5;
    stringMap["Shamim"] = 50;

    // cout << stringMap["Ramim"] << endl;

    // for (auto it = stringMap.begin(); it != stringMap.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }

    if (stringMap.count("Khalid"))
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    return 0;
}