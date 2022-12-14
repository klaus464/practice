#include <iostream>
using namespace std;

int main()
{
    int t, n, p;
    for (cin >> t; t--;)
    {
        cin >> n;
        p = 2;
        while (p * p <= n && n % p != 0)
            p++;
        if (n % p != 0)
            p = n;
        cout << n / p << " " << n / p * (p - 1) << endl;
    }
    return 0;
}
