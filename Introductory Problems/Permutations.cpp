#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    if (n < 4 && n > 1) {
        printf("NO SOLUTION\n");
    }
    else {
        vector<int> even, odd;
        for (int i = 2; i <= n; i += 2) {
            even.push_back(i);
        }
        for (int i = 1; i <= n; i += 2) {
            odd.push_back(i);
        }

        for (int num : even) {
            printf("%d\n", num);
        }
        for (int num : odd) {
            printf("%d\n", num);
        }
    }

    return 0;
}
