#ifndef SIM_HPP
#define SIM_HPP
#include <queue>
#include <chrono>
#include <random>
#include <cmath>
#include "customer.hpp"

class QueueSim{
    public:
        std::priority_queue<float, std::vector<int>, std::greater<int>> pq;
        std::queue<Customer> q;
        std::poisson_distribution<> poisson;

        int serverCount;
        int serversAvailable;
        int mu;

        QueueSim(int lambda, int mu, int em);
        float getRandomInterval(int avg);
        void arrival();


        
};

#endif