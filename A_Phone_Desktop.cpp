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

        if (smallAppNumber == 0 && bigAppNumber == 0)
        {
            cout << 0 << endl;
            continue;
        }

        int totalAppSize = 15;
        int requiredScreen = 0;

        int bigToSmall = bigAppNumber * 4;
        if (bigToSmall >= 8)
        {
            while (bigToSmall >= 4)
            {
                requiredScreen++;
                bigToSmall = bigToSmall - 8;
            }

            int vacantSpace = (requiredScreen * 15) - (bigAppNumber * 4) - smallAppNumber;

            if (vacantSpace >= 0)
            {
                cout << requiredScreen << endl;
                continue;
            }
            else
            {
                cout << requiredScreen + 1 << endl;
                continue;
            }
        }
        else
        {
            int currentAppSize = smallAppNumber + bigToSmall;
            requiredScreen = 1;
            if (currentAppSize > totalAppSize)
            {
                while (currentAppSize >= 15)
                {
                    requiredScreen++;
                    currentAppSize = currentAppSize - 15;
                }

                cout << requiredScreen << endl;
            }
            else
            {
                cout << requiredScreen << endl;
            }
        }
    }

    return 0;
}