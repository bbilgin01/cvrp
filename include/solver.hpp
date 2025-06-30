#pragma once
#include <vector>
#include "routing_data.hpp"
#include "vehicle.hpp"


class Solver{

private:
    RoutingData data;
    std::vector<Vehicle> vehicles;

public : 
    Solver(const RoutingData& data_, int vehicle_count, int vehicle_capacity);
    void solve();
    void print_solution()const; 
};