#include <bits/stdc++.h>
using namespace std;
void util(long long n)
{
    if (n == 1)
    {
        cout << 1 << " ";
        return ;
    }
    cout << n << " ";
    if (n % 2 == 0)
    {
        return util(n / 2);
    }
    else
    {
        return util(3 * n + 1);
    }
}
int main()
{
    long long n;
    cin >> n;
    util(n);
    return 0;
}