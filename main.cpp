#include <iostream>
#include "OverCoat.h"
using namespace std;

int main() {
    OverCoat coat1("Long", 1000);
    OverCoat coat2("Short", 1200);

    cout << coat1 << endl;
    cout << coat2 << endl;

    if (coat1 == coat2) cout << "Same type" << endl;
    if (coat1 > coat2) cout << "coat1 more expensive" << endl;
    else cout << "coat2 more expensive" << endl;

    return 0;
}
