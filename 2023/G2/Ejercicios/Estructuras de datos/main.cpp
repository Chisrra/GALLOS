#include <bits/stdc++.h>

using namespace std;

int main()
{
    /** Vector **/
  /*  vector<int> vect(10, 0);
    vector<int>:iterator it; //Iterador de vector int

//    for(int i = 0; i < 10; i++) {
//        vect.push_back(i);
//    }

//    for(int i = 0; i < 10; i++) {
//        vect[i] = i;
//    }


    for(int i = 0; i < 10; i++) {
        cout << vect[i] + i << endl;
    }*/
    /** set **/
    set<string> seto;
    seto.insert("Hola");
    seto.insert("juan");
    seto.insert("lalo");
    seto.insert("Hola");

    for(auto s : seto)  cout << s << endl;

    /** map **/
    map<string, int> cuentas; // conjunto de cuenta ordenadas
    pair<string, int> cuenta; // cuenta individual

    cuentas.insert({"Juan", 1000});
    cuentas["Maria"] = 5000;
    cuentas.insert(make_pair("Roberto", 2000));

    for(auto cuenta: cuentas) cout << cuenta.first << ":" << cuenta.second << endl;
    cout << cuentas["Roberto"] << endl;

    return 0;
}
