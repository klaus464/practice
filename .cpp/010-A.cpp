#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string s;
    string new_string;
    bool is_beautiful;

    long long int ans;
    long long int next;

    while (t--)
    {
        cin >> s;
        ans = 0;
        is_beautiful = false;

        if (s[0] == '0')
        {
            new_string = "0";
            next = 1;
            while (new_string.size() < s.size())
            {
                new_string += to_string(next);
                next++;
            }
            if (new_string == s)
                is_beautiful = true;
        }
        else
        {
            for (int i = 1; i <= (s.size() / 2); i++)
            {
                ans *= 10;
                ans += (s[i - 1] - '0');
                next = ans + 1;
                new_string = s.substr(0, i);
                while (new_string.size() < s.size())
                {
                    new_string += to_string(next);
                    next++;
                }
                if (new_string == s)
                {
                    is_beautiful = true;
                    break;
                }
            }
        }
        if (is_beautiful && s.size() > 1)
            cout << "YES " << ans << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}