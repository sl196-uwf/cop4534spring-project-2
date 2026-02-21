#include "sim.hpp"

QueueSim::QueueSim(int lambda, int mu, int em) {
    poisson = std::poisson_distribution<>(lambda);
    serverCount = em;
    serversAvailable = em;
    this->mu = mu;
}

void QueueSim::arrival() {
    
}

float QueueSim::getRandomInterval(int avg) {
    float random = (float)(rand()) / (float)(RAND_MAX);
    return (-1 * (1.0 * avg)) * log(random);
}