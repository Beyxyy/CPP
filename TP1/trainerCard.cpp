#include "header/trainerCard.h"
#include <iostream>

TrainerCard::TrainerCard(const std::string& _name) : 
trainerEffect("heal all your action pokemon"), Card(_name)
{};

std::string TrainerCard::getTrainerEffect() const {
    return this->trainerEffect;
};


void TrainerCard::displayInfo(){
    std::cout << this->cardName << " : " << this->trainerEffect;
}
