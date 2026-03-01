#include <iostream>
#include <string>
#include <vector>
#include <exception>

int main()
{
    std::vector<std::string> data;

    try //Durchlauf wird versucht
    {
        data.push_back("Test");
        data.push_back("Test2");

        std::cout << data.at(10) << std::endl;

        data.push_back("Test3");

        data.push_back("Test5");

    }
    catch(const std::exception &e) //bekannter Fehler erkannt
    {
        std::cout << e.what() << std::endl; //.what() gibt Art des Fehlers aus

        data.push_back("Test after exception thrown");
    }
    catch(...) //allgemein Fehler erkannt
    {
        std::cout << "Unknown Exception caught!" << std::endl;
    }

    for(const auto &text : data)
    {
        std::cout << text << std::endl;
    }

    return 0;
}
