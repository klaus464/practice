#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int ca, cb, m;
    while (t--)
    {
        cin >> ca >> cb >> m;

        if (abs(ca - m) == abs(cb - m))
            cout << "Mouse C" << endl;
        else if (abs(ca - m) < abs(cb - m))
            cout << "Cat A" << endl;
        else
            cout << "Cat B" << endl;
    }
    return 0;
}
