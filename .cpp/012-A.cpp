#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int len;
char str[N];
int digits[10];
int i, j, answer, total, maximum, digit;

inline void in()
{
    cin >> len;
}

inline void inn()
{
    cin >> str+1;
}

void solve()
{
    in();
    inn();
    answer = 0;
    for (i = 1; i <= len; i++)
    {
        for (j = 0; j <= 9; j++)
            digits[j] = 0;
        total = 0, maximum = 0;
        for (int j = i; j <= len && j <= i + 100; j++)
        {
            digit = str[j] - '0';
            digits[digit]++;
            if (digits[digit] == 1)
                total++;
            maximum = max(maximum, digits[digit]);
            if (maximum <= total)
                answer++;
        }
    }
    cout << answer << endl;
}

//main
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}