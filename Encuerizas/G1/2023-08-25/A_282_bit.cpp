#include <iostream>

using namespace std;



int main()
{
    int n, x = 0;

    cin >> n;
    char opt[n];

    for(int i = 0; i < n; i++)
    {

        for(int j = 0; j < 3; j++) {
            cin >> opt[j];
        }

        switch(opt[1])
        {
            case '+':
                x++;
            break;

            case '-':
                x--;
            break;

            default: cout << "Algo anda mal" << endl;
        }
    }

    cout << x << endl;

    return 0;
}
