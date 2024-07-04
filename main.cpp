#include <iostream>
#include "Bolnica.h"

int main() {
    Bolnica bolnica;

    try{
        cin >> bolnica;
        cout << bolnica;
        shared_ptr<Pacijent> najstariji = !bolnica;
        cout << "Najstariji pacijent: " << endl;
        najstariji->prikaziDetalje();
        for (const auto& pacijent : bolnica.getPacijenti()) {
            if (auto bolnickiPacijent = std::dynamic_pointer_cast<BolnickiPacijent>(pacijent)) {
                std::cout >> *bolnickiPacijent;
            }
        }
    }catch (const exception& e){
        cerr << "Greska: " << e.what() << endl;
    }

    return 0;
}
