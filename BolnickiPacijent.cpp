//
// Created by User on 6/30/2024.
//

#include "BolnickiPacijent.h"


BolnickiPacijent::BolnickiPacijent(std::string &ime, std::string &prezime, int starost, std::string &dijagnoza,
                                   int brSobe, std::string &datumPrijema)
                                   : Pacijent(ime,prezime,starost,dijagnoza), brSobe(brSobe), datumPrijema(datumPrijema) {}

int BolnickiPacijent::getBrSobe() const {
    return this->brSobe;
}

string BolnickiPacijent::getDatumPrijema() const {
    return this->datumPrijema;
}

void BolnickiPacijent::prikaziDetalje() {
    cout << "Detalji o pacijentu:" << endl;
    cout << "Ime: " << this->ime << endl;
    cout << "Prezime: " << this->prezime << endl;
    cout << "Starost: " << this->starost << endl;
    cout << "Dijagnoza: " << this->dijagnoza << endl;
    cout << "Broj sobe: " << this->brSobe << endl;
    cout << "Datum prijema: " << this->datumPrijema << endl;
}

bool BolnickiPacijent::operator==(const BolnickiPacijent &bolnickiPacijent) {
    return ((bolnickiPacijent.ime == ime) && (bolnickiPacijent.prezime==prezime));
}

 ostream& operator>>(ostream& os, const BolnickiPacijent& bolnickiPacijent){
    ofstream outFile("BolnickiPacijenti.txt", ios::app);

    if(outFile.is_open()){
       outFile << "Ime: " << bolnickiPacijent.getIme() << endl;
        outFile << "Prezime: " << bolnickiPacijent.getPrezime() << endl;
        outFile << "Starost: " << bolnickiPacijent.getStarost() << endl;
        outFile << "Dijagnoza: " << bolnickiPacijent.getDijagnoza() << endl;
        outFile << "Broj sobe: " << bolnickiPacijent.getBrSobe() << endl;
        outFile << "Datum Prijema: " << bolnickiPacijent.getDatumPrijema() << endl;
        outFile.close();
    } else {
        cerr << "Nije moguce otvoriti fajl." << endl;
    }
    return os;
}