#include <iostream>

using namespace std;

int main()
{
    int n, k, score_k, cont = 0;

    cin >> n >> k;
    k--;

    int scores[n];
    for(int i = 0; i < n; i++) cin >> scores[i];

    score_k = scores[k];

    for(int i = 0; i < n; i++)
    {
        if((scores[i] >= score_k) && (scores[i] > 0))
            cont++;
    }

    cout << cont << endl;

    return 0;
}
