#include <thread>
#include <mutex>
#include <iostream>

int main()
{
    std::mutex mutex;

    std::thread t1([&] {// & -> verwenden alle das gleiche Lockobjekt im Scope
        mutex.lock(); //blokiert andere threads, solange mutex nicht freigegeben
        std::cout << "1. Lock." << std::endl;


        std::cout << "1. My turn!" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        std::cout << "1. Still my turn!" << std::endl;

        std::cout << "1. Release" << std::endl;
        mutex.unlock();
    });
    std::thread t2([&] {        
        mutex.lock();
        std::cout << "2. Lock" << std::endl;

        std::cout << "2. My turn!" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        std::cout << "2. Still my turn!" << std::endl;

        std::cout << "2. Release" << std::endl;
        mutex.unlock();
    });

    t1.join(); //join verhindert, dass threads vor schluss beendet werden -> joined alle threads
    t2.join();

    return 0;
}
