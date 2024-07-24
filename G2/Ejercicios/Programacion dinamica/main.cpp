#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll fibonacciR(ll n)
{
    if(n <= 1)
        return n;
    else
    {
        ll result = fibonacciR(n - 1) + fibonacciR(n - 2);
        return result;
    }
    return 0;
}

ll fibonacciM(ll n, vector<ll>& memo)
{
    if(memo[n] != -1)
    {
        return memo[n];
    }
    if(n <= 1)
    {
        memo[n] = n;
        return n;
    }
    else
    {
        ll result = fibonacciM(n - 1, memo) + fibonacciM(n - 2, memo);
        memo[n] = result;
        return result;
    }
    return 0;
}

ll fibonacciL(ll n, vector<ll>& memo) {
    memo[0] = 0;
    memo[1] = 1;

    for(int i = 2; i <= n; i++) {
        memo[i] = memo[i - 1] + memo[i - 2];
    }

    return memo[n];
}

int main()
{
    ll n = 10000;
    vector<ll> memo(n+1, -1); // -1 significa que aun no hay respusta o solución
    cout << fibonacciL(n, memo) << endl;
    return 0;
}
