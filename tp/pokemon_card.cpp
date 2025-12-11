#include "header/pokemon_card.h"
#include <string>
using namespace std;


PokemonCard::PokemonCard(string& _name, string& _pokemonType, string& _familyName, int _evolutionLevel, int _maxHp, int _hp ) : 
pokemonType(_pokemonType), familyName(_familyName), evolutionLevel(_evolutionLevel), maxHp(_maxHp), hp(_hp), Card(_name)
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

