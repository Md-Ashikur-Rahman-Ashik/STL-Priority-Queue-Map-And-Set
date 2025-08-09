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

        int requiredScreen = 0;
        int bigAppRequirement = bigAppNumber / 2;

        int vacantSpace = (bigAppRequirement * 15) - (bigAppNumber * 4);

        if (bigAppNumber % 2 == 1)
        {
            bigAppRequirement++;
        }

        int smallAppRequirement = 0;

        if (smallAppNumber > vacantSpace)
        {
            smallAppNumber = smallAppNumber - vacantSpace;
            if (smallAppNumber > 15)
            {
                smallAppRequirement = smallAppNumber / 15;
            }
            else
            {
                smallAppRequirement = 1;
            }
        }

        requiredScreen = bigAppRequirement + smallAppRequirement;

        if (bigAppRequirement == 0 && smallAppRequirement == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << requiredScreen << endl;
        }
    }

    return 0;
}