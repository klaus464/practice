#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a;
    cin >> a;
    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < a - i - 1; ++j)
        {
            printf(" ");
        }
        for (int j = a - i - 1; j < a; ++j)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
