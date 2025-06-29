#pragma once
#include <vector>
#include "customer.hpp"

struct Vehicle{

    int id;
    int capacity;
    int load;
    std::vector<Customer> route; //visited customers

    Vehicle(int id_, int capacity_);

    bool can_add_customer(const Customer& c) const;

    void add_customer(const Customer& c);
};