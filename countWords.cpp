#include <bits/stdc++.h>
using namespace std;

int main()
{
    string inputString;
    getline(cin, inputString);

    stringstream ss(inputString);

    string word;

    map<string, int> stringMap;

    while (ss >> word)
    {
        // cout << word << " ";
        stringMap[word]++;
    }

    for (auto it = stringMap.begin(); it != stringMap.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}