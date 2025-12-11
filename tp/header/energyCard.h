#ifndef ENERGYCARD_H
#define ENERGYCARD_H
#include <string>
#include "card.h"


class EnergyCard : public Card{    
    public :
        EnergyCard();
        std::string getEnergyType() const;
        void displayInfo() override;

    private:
        std::string energyType;
  
};
#endif
