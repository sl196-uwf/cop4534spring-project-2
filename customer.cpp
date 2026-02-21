#include "customer.hpp"

Customer::Customer() {
    
}

Customer::~Customer() {
    delete nextCustomer;
}