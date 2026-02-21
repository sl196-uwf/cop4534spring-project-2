#ifndef SIM_HPP
#define SIM_HPP
#include <queue>
#include <chrono>
#include "customer.hpp"

class QueueSim{
    public:
        std::priority_queue<float, std::vector<int>, std::greater<int>> pq;
        std::queue<Customer> q;
        int serversAvailable;

        void arrival();


        
};

#endif