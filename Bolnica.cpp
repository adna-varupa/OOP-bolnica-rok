//
// Created by User on 6/30/2024.
//

#include "Bolnica.h"

ostream& operator<<(ostream& os, const Bolnica& bolnica){
    if(bolnica.pacijenti.empty()){
        throw runtime_error("Vektor pacijenata je prazan");
    }

    for(Pacijent* pacijent : bolnica.pacijenti){
        pacijent->prikaziDetalje();
        os << endl;
    }
    return os;
}

istream& operator>>(istream& is,Bolnica& bolnica){
    string tipPacijenta;
    cout << "Unesite tip pacijenta(bolnicki/ambulantni):";
    is >> tipPacijenta;

    if(tipPacijenta == "bolnicki"){
        string ime,prezime,dijagnoza,datumPrijema;
        int starost,brSobe;
        cout << "Unesite ime: ";
        is >> ime;
        cout << "Unesite prezime: ";
        is >> prezime;
        cout << "Unesite dijagnozu: ";
        is >> dijagnoza;
        cout << "Unesite br sobe: ";
        is >> brSobe
        cout << "Unesite datum prijema: ";
        is >> datumPrijema;
        bolnica.pacijenti.push_back(new BolnickiPacijent(ime,prezime,starost,dijagnoza,brSobe,datumPrijema));
    }else if(tipPacijenta == "ambulantni"){
        string ime,prezime,dijagnoza,datumPregleda, imeDoktora;
        int starost;
        cout << "Unesite ime: ";
        is >> ime;
        cout << "Unesite prezime: ";
        is >> prezime;
        cout << "Unesite dijagnozu: ";
        is >> dijagnoza;
        cout << "Unesite br sobe: ";
        is >> datumPregleda;
        cout << "Unesite datum prijema: ";
        is >> imeDoktora;
        bolnica.pacijenti.push_back(new AmbulantniPacijent(ime,prezime,starost,dijagnoza,datumPregleda,imeDoktora));
    }else{
        throw invalid_argument("Nepoznat tip pacijenta");
    }
    return is;
}

Pacijent *Bolnica::operator!() const {
    if(pacijenti.empty()){
        throw runtime_error("Nema pacijenata u bolnici");
    }

    Pacijent* najstariji = pacijenti[0];
    for(Pacijent* pacijent : pacijenti){
        if(pacijent->getStarost() > najstariji->getStarost()) {
            najstariji = pacijent;
        }
    }
    return najstariji;
}