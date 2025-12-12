#ifndef POKEMON_CARD_H
#define POKEMON_CARD_H
#include "card.h"
#include <vector>
#include <string>
#include <tuple>


class PokemonCard : public Card{
    private :
        std::string pokemonType;
        std::string familyName;
        int evolutionLevel;
        int maxHp;
        int hp;
        std::vector<std::tuple<int, std::string, int>> attacks; 
        unsigned int energy;

    public :
        void displayInfo() override;
        void incrementEnergy();
        std::string getPokemonType() const;
        std::string getFamilyName() const;
        int getEvolutionLevel() const;
        int getMaxHp() const;
        int getHp() const;
        void setHp(int _hp);
        std::vector<std::tuple<int, std::string, int>> getAttacks() const;
        PokemonCard(const std::string& _name,const std::string& _pokemonType, const std::string& _familyName, int evolutionLevel, int maxHp, std::tuple<int, std::string, int> attack1, std::tuple<int, std::string, int> attack2);
};

#endif