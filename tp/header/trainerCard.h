#ifndef TRAINERCARD_H
#define TRAINERCARD_H
#include "card.h"
#include <string>

class TrainerCard : public Card{    
    public :
        TrainerCard();
        std::string getTrainerEffect() const;
    private :
        std::string trainerEffect;   
};
#endif
