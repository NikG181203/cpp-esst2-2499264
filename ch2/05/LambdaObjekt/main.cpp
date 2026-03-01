#include <iostream>

#include <memory>
#include <functional>

int main()
{

    int x = 3;
    int y = 3;
    int z = 30;
    int result;


    //int (*calc)(int, int);
    std::function<int(int, int)> calc; //ersetzt Zeigerdefinition + interne funktionen existieren
    auto applySum = [](const int a, const int b) -> int { return a+b; }; //Definition als Lambda statt oberhalb als Funktion
    auto applyDiff = [](const int a, const int b) -> int { return a-b; }; //Rückgabewerte nach Pfeil


    calc = applySum;
    result = calc(z,x);
    std::cout << result << std::endl;

    calc = applyDiff;
    result = calc(z,y);
    std::cout << result << std::endl;


    return 0;
}
