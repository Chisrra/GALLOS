#include <bits/stdc++.h>
using namespace std;

void sub_tree(vector<int> &arbol, vector<int> &dep, int l, int r, int act_dep)
{

    if(r < l) return;
    
    if (r == l)
    {
        dep[l] = act_dep;
        return;
    }

    int ma = l;
    for (int i = l + 1; i <= r; i++)
    {
        if (arbol[ma] < arbol[i])
        {
            ma = i;
        }
    }
    dep[ma] = act_dep;
    sub_tree(arbol, dep, l, ma - 1, act_dep + 1);
    sub_tree(arbol, dep, ma + 1, r, act_dep + 1);
}

void solve()
{
    int n;
    cin >> n;
    vector<int> arbol(n);
    for (int &x : arbol)
    {
        cin >> x;
    }

    vector<int> dep(n);
    sub_tree(arbol, dep, 0, n - 1, 0);

    for (int x : dep)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}