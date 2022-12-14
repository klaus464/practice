#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, i, j, temp;

    cin >> n;
    std::vector<int> s(n, 0);
    for (i = 0; i < n; i++)
        cin >> s[i];

    cin >> m;
    for (i = 0; i < m; i++)
    {
        cin >> temp;
        for (j = 0; j < s.size(); j++)
        {
            if (s[j] == temp)
            {
                s.erase(s.begin() + j);
                j = s.size();
            }
            else if (s[j] > temp)
                j = s.size();
        }
    }

    for (i = 0; i < s.size(); i++)
        cout << s[i] << " ";
    return 0;
}