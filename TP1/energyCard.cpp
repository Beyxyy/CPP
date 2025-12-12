#include "header/energyCard.h"
#include <iostream>

EnergyCard::EnergyCard(const std::string& _energyType) : energyType(_energyType), Card("Energy"){}

std::string EnergyCard::getEnergyType() const {
    return this->energyType;
}

void EnergyCard::displayInfo(){
    std::cout << this->cardName << " of type " << this->energyType;
}
