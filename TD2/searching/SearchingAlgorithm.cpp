    #include "SearchingAlgorithm.h"
    #include <iostream>

    long int SearchingAlgorithm::totalComparaisons = 0;
    int SearchingAlgorithm::totalSearch = 0;
    double SearchingAlgorithm::averageComparaisons = 0.0;

    ostream& SearchingAlgorithm::displaySearchResults(ostream& os, int result, int target) {
        totalComparaisons += numberComparaisons;
        totalSearch++;
        averageComparaisons = double(totalComparaisons) / totalSearch;

        // Message selon résultat
        if (result != -1) {
            os << "Valeur " << target << " indice : " << result << "\n";
        } else {
            os << "Valeur " << target << " non trouvée\n";
        }

        os << "Comparaisons pour cette recherche : " << numberComparaisons << "\n";
        os << "Total comparaisons            : " << totalComparaisons << "\n";
        os << "Nombre de recherches          : " << totalSearch << "\n";
        os << "Moyenne de comparaisons       : " << averageComparaisons << "\n\n";

        return os;
    }
