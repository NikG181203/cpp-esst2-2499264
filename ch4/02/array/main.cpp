#include <iostream>
#include <array>


int main()
{
    std::array<int, 16> myRange;
    //int myRange[16]

    myRange.fill(200); //setzt jeden Wert auf Parameter

    std::cout << "The size is " << myRange.size() << std::endl; //gibt Größe des Arrays zurück

    myRange[10] = 155;

    for(auto it=myRange.begin() ; it!=myRange.end() ; it++ )
    {
        std::cout << *it << std::endl; //Dereferenzieren, da begin() Adresse gibt
    }


    return 0;
}
