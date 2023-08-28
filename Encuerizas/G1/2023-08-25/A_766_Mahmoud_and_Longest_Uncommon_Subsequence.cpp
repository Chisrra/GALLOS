#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;
    int n, sub = -1;
    cin>>a >> b;

    if(a !=  b)
    {
        sub = max(a.size(), b.size());
    }
    cout<< sub << endl;

    return 0;
}
