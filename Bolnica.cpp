//
// Created by User on 6/30/2024.
//

#include "Bolnica.h"

ostream& operator<<(ostream& os, const Bolnica& bolnica){
    if(bolnica.pacijenti.empty()){
        throw runtime_error("Vektor pacijenata je prazan");
    }

    for (const auto& pacijent : bolnica.pacijenti) {
        pacijent->prikaziDetalje();
        os << endl;
    }
    return os;
}

istream& operator>>(istream& is,Bolnica& bolnica) {
    string tipPacijenta;
    cout << "Unesite tip pacijenta(bolnicki/ambulantni):";
    is >> tipPacijenta;
    is.ignore();

    if (tipPacijenta == "bolnicki") {
        string ime, prezime, dijagnoza, datumPrijema;
        int starost, brSobe;
        cout << "Unesite ime: ";
        getline(is, ime);
        cout << "Unesite prezime: ";
        getline(is, prezime);
        cout << "Unesite starost: ";
        is >> starost;
        is.ignore(); // Clear the newline character left in the input buffer
        cout << "Unesite dijagnozu: ";
        is >> dijagnoza;
        cout << "Unesite broj sobe: ";
        is >> brSobe;
        is.ignore(); // Clear the newline character left in the input buffer
        cout << "Unesite datum prijema: ";
        getline(is, datumPrijema);
        bolnica.pacijenti.push_back(make_shared<BolnickiPacijent>(ime, prezime, starost, dijagnoza, brSobe, datumPrijema));
    } else if (tipPacijenta == "ambulantni") {
        string ime, prezime, dijagnoza, datumPregleda, imeDoktora;
        int starost;
        cout << "Unesite ime: ";
        getline(is, ime);
        cout << "Unesite prezime: ";
        getline(is, prezime);
        cout << "Unesite starost: ";
        is >> starost;
        is.ignore(); // Clear the newline character left in the input buffer
        cout << "Unesite dijagnozu: ";
        getline(is, dijagnoza);
        cout << "Unesite datum pregleda: ";
        getline(is, datumPregleda);
        cout << "Unesite ime doktora: ";
        getline(is, imeDoktora);
        bolnica.pacijenti.push_back(make_shared<AmbulantniPacijent>(ime, prezime, starost, dijagnoza, datumPregleda, imeDoktora));
    } else {
        throw invalid_argument("Nepoznat tip pacijenta.");
    }
}


std::shared_ptr<Pacijent> Bolnica::operator!() const {
    if(pacijenti.empty()){
        throw runtime_error("Vektor prazan!");
    }

    shared_ptr<Pacijent> najstariji = pacijenti[0];
    for(auto& pacijent : pacijenti){
        if(pacijent->getStarost() > najstariji->getStarost()){
            najstariji = pacijent;
        }
    }
    return najstariji;
}