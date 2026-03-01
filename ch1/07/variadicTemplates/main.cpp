#include <iostream>

void print() //definition für übergabe ohne parameter !!!
{}

template <typename TYPE, typename... Args> // ... -> Angabe von beliebig langer liste, Args ist Datentyp
void print(TYPE var, Args... args) //erster Parameter wird rausgetrennt
{
    std::cout << var;
    print(args...); //rekursiver Aufruf mit restlichen Argumenten
}

int main()
{
    print("Hi The number ", 1, " respresents something like ", 1.2f, "\n");

    return 0;
}
