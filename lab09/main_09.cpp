#include <iostream>
#include "Szemely.h"
#include "Alkalmazott.h"

int main() {
    Szemely sz1("Ferencz", "Szilard", 2001);
    Alkalmazott a1("Ferencz", "Szilard", 2001, "BOSS");
    sz1.print(cout);
    a1.print(cout);
    cout << endl;
    cout << sz1 << endl;
    cout << a1 << endl;
    return 0;
}