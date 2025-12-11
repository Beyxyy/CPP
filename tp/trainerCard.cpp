#include "header/trainerCard.h"

TrainerCard::TrainerCard() : 
trainerEffect("heal all your action pokemon"), Card("trainer")
{}

std::string TrainerCard::getTrainerEffect() const {
    return this->trainerEffect;
}
