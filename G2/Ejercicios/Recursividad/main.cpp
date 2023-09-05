#include <bits/stdc++.h>

using namespace std;

#define lli long long int

lli facotrial(lli num) {
    if(num <= 1) return 1;
    return num * facotrial(num - 1);
}

int main()
{
    cout << facotrial(5) << endl;
    return 0;
}
