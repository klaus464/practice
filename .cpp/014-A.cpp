#include <iostream>
using namespace std;

bool is_prime(int n)
{
    if (n == 2 || n == 3)
        return true;
    else if (n <= 1 || n % 2 == 0 || n % 3 == 0)
        return false;

    for (int x = 5; x * x <= n; x += 6)
        if (n % x == 0 || n % (x + 2) == 0)
            return false;

    return true;
}

int reverse(int x)
{
    int rev = 0;

    while (x)
    {
        rev = rev * 10 + x % 10;
        x /= 10;
    }

    return rev;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, mirror_primes = 0;
    cin >> a >> b;

    for (int num = a; num <= b; num++)
        if (is_prime(num) && is_prime(reverse(num)))
            mirror_primes++;

    cout << mirror_primes << endl;
    return 0;
}
