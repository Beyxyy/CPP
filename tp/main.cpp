#include "header/pokemon_card.h"
#include "header/energyCard.h"
#include "header/trainerCard.h"
#include "header/player.h"
#include <string>


int main (void){
    Player p1("Doudou Cross-Bitume");
    p1.addCardToBench(new EnergyCard("Electric"));
};