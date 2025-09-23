#include <iostream>
#include "Flat.h"
using namespace std;

int main() {
    Flat flat1(50.5, 1000);
    Flat flat2(60.0, 1200);

    cout << flat1 << endl;
    cout << flat2 << endl;

    if (flat1 > flat2) cout << "flat1 more expensive" << endl;
    else cout << "flat2 more expensive" << endl;

    return 0;
}
