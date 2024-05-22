#include <bits/stdc++.h>

using namespace std;

int main()
{
    bool solve = true;
    long int n;
    cin >> n;

    vector<bool> knights(n);
    for(long int i = 0; i < n; i++) {
        cin >> knights[i];
        if(!knights[i]) solve = false;
    }

    if(solve) {
        cout << "YES" << endl;
        return 0;
    }





    return 0;
}
