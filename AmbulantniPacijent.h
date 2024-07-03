//
// Created by User on 6/30/2024.
//

#ifndef BOLNICAROK_AMBULANTNIPACIJENT_H
#define BOLNICAROK_AMBULANTNIPACIJENT_H

#include "Pacijent.h"
#include <fstream>

class AmbulantniPacijent : public Pacijent{
private:
    string datumPregleda;
    string imeDoktora;
public:
    AmbulantniPacijent(string& ime, string& prezime, int starost, string& dijagnoza, string& datumPregleda, string& imeDoktora);
    void prikaziDetalje() override;
    friend ostream& operator>>(ostream& os, AmbulantniPacijent& ambulantniPacijent);
    string getDatumPregleda() const;
    string getImeDoktora() const;
    ~AmbulantniPacijent() = default;
};


#endif //BOLNICAROK_AMBULANTNIPACIJENT_H
