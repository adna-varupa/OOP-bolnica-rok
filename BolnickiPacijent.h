//
// Created by User on 6/30/2024.
//

#ifndef BOLNICAROK_BOLNICKIPACIJENT_H
#define BOLNICAROK_BOLNICKIPACIJENT_H

#include "Pacijent.h"
#include <fstream>

class BolnickiPacijent : public Pacijent{
private:
    int brSobe;
    string datumPrijema;
public:
    BolnickiPacijent(string& ime, string& prezime, int starost, string& dijagnoza, int brSobe, string& datumPrijema);
    void prikaziDetalje() override;
    bool operator==(const BolnickiPacijent& bolnickiPacijent);
    friend ostream& operator>>(ostream& os, const BolnickiPacijent& bolnickiPacijent);
    int getBrSobe() const;
    string getDatumPrijema() const;
    ~BolnickiPacijent() = default;
};


#endif //BOLNICAROK_BOLNICKIPACIJENT_H
