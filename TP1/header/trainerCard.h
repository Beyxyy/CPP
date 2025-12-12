#ifndef TRAINERCARD_H
#define TRAINERCARD_H
#include "card.h"
#include <string>

class TrainerCard : public Card{    
    public :
        TrainerCard(const std::string& _name);
        std::string getTrainerEffect() const;
        void displayInfo() override;

    private :
        std::string trainerEffect;   
};
#endif
