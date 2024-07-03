//
// Created by User on 6/30/2024.
//

#ifndef BOLNICAROK_BOLNICA_H
#define BOLNICAROK_BOLNICA_H

#include "Pacijent.h"
#include "BolnickiPacijent.h"
#include "AmbulantniPacijent.h"
#include <vector>

class Bolnica {
private:
vector<Pacijent*> pacijenti;
public:
    Bolnica() = default;
    friend ostream& operator<<(ostream& os, const Bolnica& bolnica);
    friend istream& operator>>(istream& is, Bolnica& bolnica);

    Pacijent* operator!() const;

    ~Bolnica(){
        for(Pacijent* pacijent : pacijenti){
            delete pacijent;
        }
    }
};

#endif //BOLNICAROK_BOLNICA_H

//I have a few questions about your solution: What does it mean when constructor is default? Why is the return type for
//operator! overloading Pacijent*?