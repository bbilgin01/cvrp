#include "vehicle.hpp"


Vehicle::Vehicle(int id_, int capacity_)
    : id(id_), capacity(capacity_), load(0) {}

bool Vehicle::can_add_customer(const Customer& c)const{
    return (load + c.demand <= capacity);
}

void Vehicle::add_customer(const Customer& c){
    route.push_back(c);
    load+= c.demand;
}