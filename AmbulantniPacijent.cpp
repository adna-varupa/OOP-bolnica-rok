//
// Created by User on 6/30/2024.
//

#include "AmbulantniPacijent.h"

AmbulantniPacijent::AmbulantniPacijent(std::string &ime, std::string &prezime, int starost, std::string &dijagnoza,
                                       std::string &datumPregleda, std::string &imeDoktora)
                                       : Pacijent(ime,prezime,starost,dijagnoza),datumPregleda(datumPregleda), imeDoktora(imeDoktora){}

string AmbulantniPacijent::getDatumPregleda() const {
    return this->datumPregleda;
}

string AmbulantniPacijent::getImeDoktora() const {
    return this->imeDoktora;
}

void AmbulantniPacijent::prikaziDetalje(){
    cout << "Detalji o pacijentu:" << endl;
    cout << "Ime: " << this->ime << endl;
    cout << "Prezime: " << this->prezime << endl;
    cout << "Starost: " << this->starost << endl;
    cout << "Dijagnoza: " << this->dijagnoza << endl;
    cout << "Datum pregleda: " << this->datumPregleda << endl;
    cout << "Ime doktora: " << this->imeDoktora << endl;
}

ostream& operator>>(ostream& os, const AmbulantniPacijent& ambulantniPacijent){
    ofstream outFile("AmbulantniPacijenti.txt", ios::app);

    if(outFile.is_open()){
        outFile << "Ime: " << ambulantniPacijent.getIme() << endl;
        outFile << "Prezime: " << ambulantniPacijent.getPrezime() << endl;
        outFile << "Starost: " << ambulantniPacijent.getStarost() << endl;
        outFile << "Dijagnoza: " << ambulantniPacijent.getDijagnoza() << endl;
        outFile << "Datum pregleda: " << ambulantniPacijent.getDatumPregleda() << endl;
        outFile << "Ime doktora: " << ambulantniPacijent.getImeDoktora() << endl;
        outFile.close();
    } else {
        cerr << "Nije moguce otvoriti fajl." << endl;
    }
    return os;
}