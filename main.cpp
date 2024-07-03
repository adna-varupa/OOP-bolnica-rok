#include <iostream>
#include "Bolnica.h"

int main() {
    Bolnica bolnica;

    try{
        cin >> bolnica;
        cout << bolnica;
        Pacijent* najstariji = !bolnica;
        cout << "Najstariji pacijent: " << endl;
        najstariji->prikaziDetalje();
    }catch (const exception& e){
        cerr << "Greska: " << e.what() << endl;
    }
    return 0;
}
