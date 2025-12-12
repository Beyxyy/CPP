#include "header/player.h"
#include "header/energyCard.h"
#include "header/player.h"
#include "header/card.h"
#include "header/pokemon_card.h"
#include "header/trainerCard.h"
#include <tuple>
#include <iostream>


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

void Player::activatePokemonCard(unsigned int index){
    if (this->benchCards.size() >= index) {
        this->actionCards.push_back(this->benchCards[index]);
        for(auto a : this->actionCards) std::cout<< a->getCardName();
        this->benchCards.erase(this->benchCards.begin() + index);
        std::cout << this->playerName << " is activating " << this->benchCards[index]->getCardName() << std::endl;
    }
}

void Player::attachEnergyCard(unsigned int actionIndex , unsigned int benchIndex ){
    if (this->benchCards.size() < benchIndex || this->actionCards.size() < actionIndex) {
        std::cout << " error lors de l'attacheent de l'énergy : " << this->playerName;
        exit(1);
    }

    EnergyCard* energy = dynamic_cast< EnergyCard*>(this->benchCards[benchIndex]);
    PokemonCard* pokemon = dynamic_cast<PokemonCard*>(this->actionCards[actionIndex]);
    pokemon->incrementEnergy();

    if (!energy) {
        std::cerr << "Erreur : carte Energy invalide !" << std::endl;
        return;
    }
    if (!pokemon) {
        std::cerr << "Erreur : Pokémon invalide !" << std::endl;
        return;
    }

    std::cout << this->playerName << " is attaching " << energy->getCardName() << " to " << pokemon->getCardName()<< std::endl;
    this->benchCards.erase(this->benchCards.begin() + benchIndex);
}


void Player::displayBench(){
    std::cout << "Bench Cards for "<< this->playerName <<std::endl;
    for (auto card : this->benchCards){
        card->displayInfo();
    }
}
void Player::displayAction(){
    std::cout << " Action Cards for "<< this->playerName<<std::endl;
    for (auto card : this->actionCards){
        card->displayInfo();
    }
}


void Player::attack(unsigned int pokemonIndex , unsigned int attackIndex,Player& p2, unsigned int pokemonTargetIndex){
    PokemonCard *pcard = dynamic_cast<PokemonCard*>(this->getActionCards()[pokemonIndex]);
    int degat = std::get<2>(pcard->getAttacks()[attackIndex]);
    std::cout<<this->playerName << " attacking "<<  p2.playerName <<" 's "<<pcard->getCardName() << " with " <<std::get<1>(pcard->getAttacks()[attackIndex]) <<std::endl;
    std::cout<<"Reducing "<<degat<<"hp"<<std::endl;
    pcard->setHp(pcard->getMaxHp()-degat);
    if(pcard->getHp()>0){
        std::cout<<pcard->getCardName()<< " is still alive "<<std::endl;
    }
}

void Player::useTrainer(unsigned int index){
    for(Card* c : this->getActionCards()){
        if (auto p = dynamic_cast<PokemonCard*>(c)) {
             p->setHp(p->getMaxHp());
        }
    }
    std::cout<< this->playerName << " used "<<this->benchCards[index]->getCardName() << " to " << dynamic_cast<TrainerCard*>(this->benchCards[index])->getTrainerEffect() <<std::endl;
    this->benchCards.erase(this->benchCards.begin() + index);


}
