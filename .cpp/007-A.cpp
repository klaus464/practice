#include <bits/stdc++.h>
using namespace std;

long long int
    i,
    j,
    a, b,
    n, cube_size, required_sticks;

void check()
{
    if (!n)
    {
        cout << required_sticks << endl;
        exit(0);
    }
    return;
}

// constructs a cuboid of i*i
void construct_cuboid()
{
    for (a = 1; a <= i; a++)
    {
        for (b = 1; b <= (2 * a - 1); b++)
        {
            if (b == 1 && a == 1)
            {
                n--;
                required_sticks += 8;
                check();
            }
            else if (b == 1 || b == a)
            {
                n--;
                required_sticks += 5;
                check();
            }
            else
            {
                n--;
                required_sticks += 3;
                check();
            }
        }
    }
}

int main()
{
    cin >> n;

    required_sticks = 12;
    cube_size = 1;

    if (!n || n == 1)
    {
        cout << 12 * n;
        return 0;
    }
    else
    {
        while (pow(cube_size, 3) < n)
            cube_size++;
        n--;
        for (i = 1; i < cube_size;)
        {
            construct_cuboid();
            construct_cuboid();
            for (j = 1; j <= i; j++)
            {
                if (j == 1)
                {
                    n--;
                    required_sticks += 5;
                    check();
                }
                else
                {
                    n--;
                    required_sticks += 3;
                    check();
                }
            }
            i++;
            construct_cuboid();
            check();
        }
    }
    return 0;
}