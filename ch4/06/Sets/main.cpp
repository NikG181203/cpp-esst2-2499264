#include <iostream>
#include <set>
#include <string>

int main()
{
    std::set<std::string> names; //Suchbäume -> keine Gleichen elemente möglich (ähnlich wie set in Python), kein Zugriff über []

    names.insert("John"); //jedes Element hat maximal 2 zeiger auf anderes element
    names.insert("Steve");
    names.insert("Alan");
    names.insert("Josh");
    names.insert("Josh");
    names.insert("Jeff");
    names.insert("Jeff");
    names.insert("Bryan");

    for(const auto &name : names)
    {
        std::cout << name << std::endl;
    }

    return 0;
}
