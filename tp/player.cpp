#include "header/player.h"
Player::Player(const std::string& name)  : playerName(name){}

std::string Player::getPlayerName() const {
    return this->playerName;
} 
std::vector<Card*> Player::getBenchCards() const{
    return this->benchCards;
}   
void Player::addCardToBench(Card* _benchCards){
    this->benchCards.push_back(_benchCards);
}
std::vector<Card*> Player::getActionCards() const{
    return this->actionCards;
} 

