#ifndef CARD_H
#define CARD_H
#include <string>

class Card{
    protected :
        std::string cardName;
    public :
        Card(const std::string);
        std::string getCardName() const;
        virtual void displayInfo() = 0;
};

#endif
