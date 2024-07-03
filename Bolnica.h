//
// Created by User on 6/30/2024.
//
//
#ifndef BOLNICAROK_BOLNICA_H
#define BOLNICAROK_BOLNICA_H

#include "Pacijent.h"
#include "BolnickiPacijent.h"
#include "AmbulantniPacijent.h"
#include <vector>
#include <memory>

class Bolnica {
private:
shared_ptr<vector<Pacijent>> pacijenti;
public:
    friend ostream& operator<<(ostream& os, const Bolnica& bolnica);
    friend istream& operator>>(istream& is, Bolnica& bolnica);
    shared_ptr<Pacijent> operator!() const;
};

#endif //BOLNICAROK_BOLNICA_H

//I have a few questions about your solution: What does it mean when constructor is default? Why is the return type for
//operator! overloading Pacijent*?