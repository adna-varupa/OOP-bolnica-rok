//
// Created by User on 6/30/2024.
//

#ifndef BOLNICAROK_PACIJENT_H
#define BOLNICAROK_PACIJENT_H

#include <string>
#include <iostream>

using namespace  std;

class Pacijent {
protected:
    string ime;
    string prezime;
    int starost;
    string dijagnoza;
public:
    Pacijent(string& ime, string& prezime, int starost, string& dijagnoza);
    virtual void prikaziDetalje() = 0;
    string getIme() const;
    string getPrezime() const;
    string getDijagnoza() const;
    int getStarost() const;
    ~Pacijent() = default;
};


#endif //BOLNICAROK_PACIJENT_H
