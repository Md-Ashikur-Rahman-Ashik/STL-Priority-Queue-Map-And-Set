#include <bits/stdc++.h>
using namespace std;

int main()
{
    // priority_queue<int> integerQueue;
    priority_queue<int, vector<int>, greater<int>> integerQueue;

    integerQueue.push(10);
    integerQueue.push(5);
    integerQueue.push(30);

    cout << integerQueue.top() << endl;
    return 0;
}