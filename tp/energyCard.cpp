#include "header/energyCard.h"
#include <iostream>
#include "energyCard.h"

EnergyCard::EnergyCard(const std::string& _energyType) : energyType(_energyType), Card("Energy"){}

void EnergyCard::setEnergyType(const std::string& _energyType){
    this->energyType = _energyType;
}
std::string EnergyCard::getEnergyType() const {
    return this->energyType;
}

void EnergyCard::displayInfo(){
    std::cout << this->cardName << " | " << this->energyType;
}
