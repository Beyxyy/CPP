#include "header/pokemon_card.h"
#include "header/energyCard.h"
#include "header/trainerCard.h"
#include "header/player.h"
#include <string>
#include <iostream>


int main (void){
    Player p1("Doudou Cross-Bitume");
    p1.addCardToBench(new EnergyCard("Electric"));
    p1.addCardToBench(new EnergyCard("Electric"));
    p1.addCardToBench(new TrainerCard("Didi cross gazon"));
    p1.addCardToBench(new PokemonCard(
        "Pipikakachu",
        "Electric",
        "Pikachu",
        2,
        100,
        {2, "La spéciale de Claude François", 20},
        {2, "Coup de foutre", 20}
    ));

    p1.activatePokemonCard(3);
    p1.attachEnergyCard(0,0);
    p1.attachEnergyCard(0,0);
    std::cout<<std::endl;

    p1.displayBench();
    std::cout<<std::endl;

    p1.displayAction();

    //player 2
    Player p2("Germe");
    p2.addCardToBench(new EnergyCard("Grasse"));
    p2.addCardToBench(new TrainerCard("Didi cross gazon"));
    p2.addCardToBench(new PokemonCard(
        "Buldozer",
        "Grasse",
        "Buldozer",
        1,
        100,
        {2, "Leche seed", 15},
        {2, "Coup de foutre", 20}
    ));

    p2.activatePokemonCard(2);
    p2.attachEnergyCard(0,0);

    std::cout<<std::endl;
    p2.displayBench();
    std::cout<<std::endl;
    p2.displayAction();
    std::cout<<std::endl;

    p1.attack(0,0, p2, 0);
    std::cout<<std::endl;

    p2.displayAction();
    p2.useTrainer(0);
    std::cout<<std::endl;

    p2.displayAction();
    return 0;

};