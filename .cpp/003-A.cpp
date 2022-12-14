#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int i, max_element = 0, count = 0;

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        max_element = max(max_element, arr[i]);
    }

    for (i = 0; i < n; i++)
        if (arr[i] == max_element)
            count++;

    cout << count;

    return 0;
}