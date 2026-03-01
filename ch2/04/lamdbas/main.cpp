#include <iostream>
#include <list>


int main()
{
    std::list<int> myList = {23, 50, 0};

    myList.sort( []( const int a, const int b ) { return a > b; } ); //definiert allgemein (z.B. void fun...) oder punktuell (NAME.FUNKTION) Funktion 

    for ( const auto &elem : myList )
    {
        std::cout << elem << std::endl;
    }

    std::cout << std::endl;

    myList.sort( []( const int a, const int b ) { return a < b; } );//mehrfach definierba rmit verschiedenen anwenudngen

    for ( const auto &elem : myList )
    {
        std::cout << elem << std::endl;
    }

    std::cout << std::endl;


    std::list<int> myListDebug = {23, 50, 0};
    std::list<std::string> log;
    myListDebug.sort( [&]( const int a, const int b ) // & sorgt dafür, dass nicht angegebene VParameter als Variablen akzeptiert werden
                            { //Code in geschweiften Klammern -> Lambda Funktion
                                if(a<b){
                                    log.push_back("value is smaller");
                                    return true;
                                }
                                else{
                                    log.push_back("value is greater");
                                    return false;
                                }
                            } );

    for ( const auto &line : log )
    {
        std::cout << line << std::endl;
    }


    for ( const auto &elem : myList )
    {
        std::cout << elem << std::endl;
    }
}
