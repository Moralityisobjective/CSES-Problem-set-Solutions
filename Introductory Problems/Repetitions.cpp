#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a = 0, b = 0, c = 0, d = 0;
    string s;
    string j = "ACGT";
    cin >> s;
    int n = s.length();
    int a1 = 0, b1 = 0, c1 = 0, d1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == j[0])
        {
            a++;
        }
        else
        {
            a = 0;
        }
        if (s[i] == j[1])
        {
            b++;
        }
        else
        {
            b = 0;
        }
        if (s[i] == j[2])
        {
            c++;
        }
        else
        {
            c = 0;
        }
        if (s[i] == j[3])
        {
            d++;
        }
        else
        {
            d = 0;
        }

        if (a1 < a)
        {
            a1 = a;
        }
        if (b1 < b)
        {
            b1 = b;
        }
        if (c1 < c)
        {
            c1 = c;
        }
        if (d1 < d)
        {
            d1 = d;
        }
    }

    if (a1 >= b1 && a1 >= c1 && a1 >= d1)
    {
        cout << a1 << endl;
    }
    else if (b1 >= a1 && b1 >= c1 && b1 >= d1)
    {
        cout << b1 << endl;
    }
    else if (c1 >= a1 && c1 >= b1 && c1 >= d1)
    {
        cout << c1 << endl;
    }
    else
    {
        cout << d1 << endl;
    }

    return 0;
}
