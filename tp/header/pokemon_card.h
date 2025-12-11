#ifndef POKEMON_CARD_H
#define POKEMON_CARD_H
#include "card.h"
#include <vector>
#include <string>

class PokemonCard : public Card{
    private :
        std::string pokemonType;
        std::string familyName;
        int evolutionLevel;
        int maxHp;
        int hp;
        std::vector<std::tuple<int, int, std::string, int>> attacks; 

    public :
    std::string getPokemonType() const;
    std::string getFamilyName() const;
    int getEvolutionLevel() const;
    int getMaxHp() const;
    int getHp() const;
    PokemonCard(std::string&, std::string&, std::string&, int, int, int);
};

#endif