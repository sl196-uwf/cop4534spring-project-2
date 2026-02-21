#include <iostream>
#include <string>
#include <fstream>
#include "sim.hpp"

int main() {
    std::ifstream fStream("test1.txt");
    std::string fString;

    std::getline(fStream, fString);
    const int LAMBDA = stoi(fString);
    std::getline(fStream, fString);
    const int MU = stoi(fString);
    std::getline(fStream, fString);
    const int EM = stoi(fString);
    std::getline(fStream, fString);
    const int EVENTS2SIMULATE = stoi(fString);
    fStream.close();

    auto start = std::chrono::steady_clock::now();
    auto stop = std::chrono::steady_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    std::cout << duration.count();

    std::cout << "Lambda: " << LAMBDA << "\n" <<
                "Mu: " << MU << "\n" <<
                "M: " << EM << "\n" <<
                "Events to simulate: " << EVENTS2SIMULATE << std::endl;


    QueueSim sim(LAMBDA, MU, EM);

    for (int i = 0; i != 20; i++) {
        std::cout << sim.getRandomInterval(MU) << std::endl;
    }

    return 0;
}