/***
 * Author: Cristian Donato
 * Created: 2023-02-07
 * Description: The minimum amount to pay in order to buy the three books
 * Link to: https://codeforces.com/gym/102890
*/
#include <iostream>

using namespace std;

int main()
{
    int libro[3];
    int cuenta = 0, subcuenta = 0;
    cin >> libro[0] >> libro[1] >> libro[2];
    
    for(int i = 0; i < 3; i++) {
        subcuenta += libro[i];
        if(subcuenta >= 500) {
            cuenta += subcuenta - 100;
            subcuenta = 0;
        }
    }
    cuenta += subcuenta;
    
    cout << cuenta << endl;

    return 0;
}