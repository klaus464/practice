#include <iostream>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll cnt = 0;
        string s;
        cin >> s;
        for (ll i = 0; i < s.length(); i++)
            if (s[i] == s[i + 1])
            {
                cnt++;
                s.erase(i--, 1);
            }
        cout << cnt << endl;
    }

    return 0;
}
