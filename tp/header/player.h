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
        void addCardToBench(Card*);   

    private :
        std::string playerName;
        std::vector<Card*> benchCards;
        std::vector<Card*> actionCards;
};  
#endif
