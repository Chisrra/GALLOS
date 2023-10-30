#include <iostream>

using namespace std;    

typedef unsigned long long int ulli;

int main() {
    long t; cin >> t;
    ulli n,s, m, low, top, med;


    while(t--) {
        cin >> n >> s;
        low = 0;
        m = (n / 2) + 1;
        top = s + 1;

        while((top - low) > 1) {
            med = (low + top) / 2;
            if((med * m) <= s) {
                low = med;
            } else {
                top = med;
            }
        }
        cout << low << endl;
    }
    

    return 0;
}   
