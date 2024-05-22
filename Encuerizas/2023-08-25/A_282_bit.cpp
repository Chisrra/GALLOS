#include <iostream>

using namespace std;



int main()
{
    int n, x = 0;

    cin >> n;
    char opt[];

    for(int i = 0; i < n; i++)
    {
        cin >> opt;
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
