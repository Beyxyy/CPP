#include "header/pokemon_card.h"
#include <string>
#include <tuple>
#include <iostream>

using namespace std;


PokemonCard::PokemonCard(const std::string& _name,const std::string& _pokemonType,const std::string& _familyName, int _evolutionLevel, int _maxHp, tuple<int, std::string, int> attack1, tuple<int, std::string, int> attack2):
Card(_name), pokemonType(_pokemonType), familyName(_familyName), evolutionLevel(_evolutionLevel), maxHp(_maxHp), energy(0),hp(_maxHp),  attacks{attack1, attack2} 
{}

string PokemonCard::getFamilyName() const {
    return this->familyName;
}
string PokemonCard::getPokemonType() const {
    return this->pokemonType;
}

int PokemonCard::getMaxHp() const {
    return this->maxHp;
}

int PokemonCard::getHp() const {
    return this->hp;
}

std::vector<std::tuple<int, std::string, int>> PokemonCard::getAttacks() const{
    return this->attacks;
}


void PokemonCard::displayInfo(){
    std::cout << this->cardName << std::endl;
    std::cout<<"Attacks"<<std::endl;
    for (auto a : attacks){
        std::cout<< "Coup :" << std::get<0>(a)<<endl;
        std::cout<< "Attack Name :" << std::get<1>(a)<<endl;
        std::cout<< "Dammage :" << std::get<2>(a)<<endl;
        std::cout<< "HP :" << this->getHp()<<endl;
    }
}

void PokemonCard::incrementEnergy(){
    this->energy++;
}

void PokemonCard::setHp(int _hp){
    this->hp = _hp;
}