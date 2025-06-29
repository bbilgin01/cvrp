#include "routing_data.hpp"


RoutingData::RoutingData(const Customer& depot_) : depot(depot_){}

void RoutingData::add_customer(const Customer& c) {
    customers.push_back(c);
}

