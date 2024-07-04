#ifndef BOLNICA_H
#define BOLNICA_H

#include <vector>
#include <memory>
#include <iostream>
#include "Pacijent.h"
#include "BolnickiPacijent.h"
#include "AmbulantniPacijent.h"

class Bolnica {
private:
    std::vector<std::shared_ptr<Pacijent>> pacijenti;
public:
    Bolnica() = default;
    ~Bolnica() = default;

    friend std::ostream& operator<<(std::ostream& os, const Bolnica& bolnica);
    friend std::istream& operator>>(std::istream& is, Bolnica& bolnica);
    std::shared_ptr<Pacijent> operator!() const;
    vector<shared_ptr<Pacijent>>& getPacijenti(){
        return pacijenti;
    };
};

#endif // BOLNICA_H
