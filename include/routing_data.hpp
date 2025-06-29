#pragma once
#include <vector>
#include "customer.hpp"

class RoutingData{
public:
    Customer depot;
    std::vector<Customer> customers;

    RoutingData(const Customer& depot_);
    void add_customer(const Customer& c);
};