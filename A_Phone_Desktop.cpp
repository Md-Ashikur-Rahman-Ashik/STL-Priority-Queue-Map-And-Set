#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;

    for (int i = 0; i < testcase; i++)
    {
        int smallAppNumber, bigAppNumber;
        cin >> smallAppNumber >> bigAppNumber;

        int totalAppSize = 15;
        int requiredScreen = 1;

        int bigToSmall = bigAppNumber * 4;
        int currentAppSize = smallAppNumber + bigToSmall;

        if (currentAppSize > totalAppSize)
        {
            while (true)
            {
                currentAppSize = currentAppSize - 15;
                requiredScreen++;
                if (currentAppSize <= 15)
                {
                    break;
                    ;
                }
            }
        }

        cout << requiredScreen << endl;
    }

    return 0;
}