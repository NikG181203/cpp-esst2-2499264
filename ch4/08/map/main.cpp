#include <iostream>
#include <map>
#include <cmath> //ermöglich durch pow 10 hoch i


int main()
{
    // Zehnertabelle, welche den Exponenten der Basis 10 zurückgibt.
    std::map<int, int> potTenTable; //gibt key-value paare

    for(int i=0 ; i<10 ; i++)
    {
        potTenTable[std::pow(10, i)] = i; //speichereffizienter als array oder vector
    }

    for(auto &pair : potTenTable)
    {
        auto key = pair.first; //gibt Key zurück -> erstes Element jedes Paares
        std::cout << "potTenTable[" << key << "] = " << potTenTable[key] << std::endl;
    }

    std::cout << "Size of map: " << potTenTable.size() << std::endl;

    // Der Key für 20 wird angelegt aber mit dem Wert 0, was nicht richtig ist.
    std::cout << potTenTable[20] << std::endl;

    // Zum prüfen ob es den Key überhaupt gibt.
    if(potTenTable.find(30) == potTenTable.end()) //sucht key, ohne extra anzulegen -> Speichereffizienter
    {
        std::cout << "There is no element for value 30" << std::endl;
    }

    std::cout << "Size of map: " << potTenTable.size() << std::endl;

    return 0;
}
