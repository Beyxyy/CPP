#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include "card.h"
#include <vector>

class Player{    
    public :
        Player(const std::string&);
        std::string getPlayerName() const;   
        std::vector<Card*> getBenchCards() const;   
        std::vector<Card*> getActionCards() const;
        void activatePokemonCard(unsigned int index);
        void addCardToBench(Card *);
        void attachEnergyCard(unsigned int actionIndex , unsigned int benchIndex );

        void displayBench();

        void displayAction();

        void attack(unsigned int, unsigned int, Player&, unsigned int);

        void useTrainer(unsigned int index);

    private :
        std::string playerName;
        std::vector<Card*> benchCards;
        std::vector<Card*> actionCards;
};  
#endif
