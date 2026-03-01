#include <iostream>
#include <list>
#include <forward_list>

int main()
{
    std::list<int> myList; //doppelt verkettete Liste -> front und back sind head und pushbar
    std::forward_list<int> myForwardList; //ienfach verkettete Liste -> nur front zum push 

    for(int i=0 ; i<7 ; i++)
    {
        myList.push_front(i);
        myForwardList.push_front(i);
    }

    for(int i=0 ; i<7 ; i++)
    {
        myList.push_back(100+i);
    }

    for(int i=0 ; i<7 ; i++)
    {
        myList.push_front(200+i);
    }

    auto it = myList.end(); //kein Zugriff mit [] -> Iterator muss sich geholt werden für Austausch
    it--;
    myList.insert(it, 500); //fügt an stelle hinzu

    it--; it--;

    it = myList.erase(it); //Iterator wird beim Löschen gespeichert
    it--;
    myList.erase(it);

    std::cout << "myList :" << std::endl;
    for(const auto val : myList)
    {
        std::cout << val << std::endl;
    }

    std::cout << "std::forward_list :" << std::endl;
    for(const auto val : myForwardList)
    {
        std::cout << val << std::endl;
    }

    return 0;
}
