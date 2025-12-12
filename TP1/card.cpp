#include "header/card.h"
#include <string>

Card::Card(const std::string name) : cardName(name){}
std::string Card::getCardName() const{
    return this->cardName;
}
