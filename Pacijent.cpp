//
// Created by User on 6/30/2024.
//

#include "Pacijent.h"

Pacijent::Pacijent(std::string &ime, std::string &prezime, int starost, std::string &dijagnoza)
    : ime(ime), prezime(prezime), starost(starost), dijagnoza(dijagnoza){}

string Pacijent::getIme() const {
    return this->ime;
}

string Pacijent::getPrezime() const {
    return this->prezime;
}

string Pacijent::getDijagnoza() const {
    return this->dijagnoza;
}

int Pacijent::getStarost() const {
    return this->starost;
}

