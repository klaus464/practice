#include <iostream>
using namespace std;
typedef long long int ll;

int main()
{
    string s;
    cin >> s;
    
    bool  reduced = true;
    while(reduced){
        reduced = false;
        for(ll i=0; i<s.length(); i++)
            if(s[i] == s[i+1]){
                reduced = true;
                s.erase(i, 2);
            }
    }
    
    if(s.length() == 0)
        cout << "Empty String";
    else
        cout << s;
    return 0;
}
